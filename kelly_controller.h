class Kelly {
  public:
    void updateKellyData(std::vector<uint8_t> rcvdData) {
      if (calcCheckSum(rcvdData)) { //neuer code --> funktioniert das?
        //Serial.println("Checksum matches!! --> update kelly data");
        if (rcvdData.at(0) >= 58 && rcvdData.at(0) <= 60) {
          //Serial.print("Kelly rvcd msg: ");
          for (int i = 0; i < 19; i++) {
            currentControllerData_[rcvdData.at(0)-58][i] = rcvdData.at(i);
            //Serial.print(rcvdData[i]);
            
            Serial.print(" ");
          }
          Serial.println("");
        } else {
          errorMsg_ = "Kelly: Received data ID can not be decoded";
          Serial.println("kelly: Received data ID can not be decoded");
        }
      } else {
        timeout2++;
        if (timeout2 > 10) {
          timeout = 11;
          timeout2 = 0;
          
        }
        errorMsg_ = "Kelly: Checksum does NOT match --> no data updated";
        Serial.println("Kelly: Checksum does NOT match --> no data updated");
      }
    }

    void printCurrentControllerData() {
      for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 19; k++) {
          Serial.print(currentControllerData_[i][k]);
          Serial.print(" ");
        }
        Serial.println();
      }
      Serial.println();
    }

    int getVoltage() {
      int voltage = currentControllerData_[0][11];
      return voltage;
    }

    int getMotorTemp() {
      int motorTemp = currentControllerData_[0][12];
      return motorTemp;
    }

    int getControllerTemp() {
      int controllerTemp = currentControllerData_[0][13];
      return controllerTemp;
    }

    int getPhaseCurrent() {
      int phaseCurrent = 0;
      phaseCurrent <<= 8;
      phaseCurrent |= currentControllerData_[1][6]; //which bytes are for phase current?
      phaseCurrent <<= 8;
      phaseCurrent |=  currentControllerData_[1][7]; //which bytes are for phase current?
      return phaseCurrent;
    }

    float getSpeed() {
      int speedRpm = 0;
      float speedKmh = 0.0;
      speedRpm <<= 8;
      speedRpm |= currentControllerData_[1][4];
      speedRpm <<= 8;
      speedRpm |=  currentControllerData_[1][5];
      speedKmh = (speedRpm/gearRatio_)*2*3.1416*(wheelSize_/2.0)*(1/60.0)*3.6;
      return speedKmh;
    }

    float getDayKm() { //neuer code: pruefen
      return distanceKm_;
    }

    void updateKm() { //neuer code: pruefen
      int timeframe = millis() - timeKmCalc_;
      timeKmCalc_ = millis();
      Serial.print("loop time kelly km: ");
      Serial.println(timeframe);
      distanceKm_ = distanceKm_ + getSpeed() * (timeframe/3600000.0);
    }

    void setTotalKmOld(int totalKmOldSD) {
      totalKmOld_ = totalKmOldSD;
    }

    int getTotalKm() {
      return totalKmOld_ + (int)(distanceKm_);
    }

    bool errorActive() {
      if ((currentControllerData_[1][8] != 0) || (currentControllerData_[1][9] != 0) || (errorMsg_.length() > 4)) { //which bytes are for error?
        return true;
      }
      return false;
    }

    void clearOldErrorMsg() {
      errorMsg_ = "";
    }

    std::string getErrorMsg() {
      //uint8_t testData[19] = {0xa5, 0x80, 0x97, 0x08, 0x02, 0x00, 0x40, 0x00, 0xa4, 0x02, 0x00, 0x00, 0xc4, 0x40, 0x00, 0xa4, 0x00, 0x00, 0x00} ;
      for(int byteIdx = 0; byteIdx < 2; byteIdx++) { //which bytes are for error?
        for(int bitIdx = 0; bitIdx < 8; bitIdx++) {
          int isBitSet = currentControllerData_[1][8+byteIdx] & (0x1 << bitIdx); //which bytes are for error?
          //int isBitSet = testData[8+byteIdx] & (0x1 << bitIdx);
          if(isBitSet) {
              int idx = byteIdx*8+bitIdx;
              errorMsg_ += " & " + preDevErrorMsgs_[idx];
          }
        }
      }
      return errorMsg_;
    }

    byte command[3][3] = {
      {0x3a, 0x00, 0x3a}, //0 Voltage, Temp, ..?
      {0x3b, 0x00, 0x3b}, //1 rpm, phase current, error, ..?
      {0x3c, 0x00, 0x3c}  //3 ??
    };
    uint8_t timeout = 0;
    uint8_t timeout2 = 0;
    uint8_t commandNum = 0;

  private:
    bool calcCheckSum(std::vector<uint8_t> msg) {
      int sum = 0;
      for (int i = 0; i < 18; i++) {
        sum += msg.at(i); 
      }
      if (sum%256 == msg.at(18)) {
        return true;
      } else {
        return false;
      }
    }

    std::string preDevErrorMsgs_[16] = {
      "Identify Err", //0
      "Over Volt", //1
      "Low Volt", //2
      "Warning: Controller over 90 Degrees (or reserved)", //3
      "Motor fails to start (or Locking)", //4
      "B+, 12V, 5V Error", //5
      "Error: Controller over 100 Degrees", //6
      "High Throttle at power up", //7
      "Frequent reset (or reserved)", //8
      "Internal reset (or reset error)", //9
      "Throttle short or open circut: 1 - 4V hall throttle", //10
      "Throttle is not zero when try to change direction (or hall sensor error)", //11
      "B+ over voltage at startup or regeneration (or reserved)", //12
      "Hall sensor signal error (or emergency rev err)", //13
      "Motor over temperature", //14
      "Current Meter Err (or nothing)" //15
    };

    
    byte currentControllerData_[3][19] = {
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} 
    };
    //byte receivedData_[19];
    std::string errorMsg_ = "";
    const uint8_t gearRatio_ = 5;
    const float wheelSize_ = 0.52; //m --> 16 inch + tube thickness
    float distanceKm_ = 0.0;
    int totalKm_;
    int totalKmOld_;
    unsigned long timeKmCalc_ = millis();
};