//to do: Error log to SD Card

class errorHandling {
  public:
    void setErrorMsg(std::string msg) {
      errorFlag = true;
      errorMsg = errorMsg + msg;
      Serial.print("error Message: ");
      Serial.println(errorMsg.c_str());
    }

    bool getErrorFlag() {
      return errorFlag;
    }

    void resetError() {
      errorFlag = false;
      errorMsg = "";
    }

    std::string getErrorMsg() {
      return errorMsg;
    }

  private:
    bool errorFlag = false;
    std::string errorMsg = "";
};