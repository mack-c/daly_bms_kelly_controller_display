#include "BLEDevice.h"

//*********** BT setup ************
static BLEUUID    serviceUUID("fff0"); // The remote service we wish to connect to.
static BLEUUID    charUUID_write("fff2"); // The characteristic of the remote service we are interested in.
static BLEUUID    charUUID_read("fff1");
static BLERemoteCharacteristic* pRemoteCharacteristic_write;
static BLERemoteCharacteristic* pRemoteCharacteristic_read;
bool btConnected = false;

static void notifyCallback(BLERemoteCharacteristic* pBLERemoteCharacteristic, uint8_t* pData, size_t length, bool isNotify);

bool connectToServer() {
  BLEClient*  pClient  = BLEDevice::createClient();
  Serial.println(" - Created client");

  // Connect to the remove BLE Server.
  if (pClient->connect(BLEAddress("40:d6:3c:34:99:7b"))) {
    Serial.println(" - Connected to server");
  } else {
    Serial.println("Failed to connect!!");
    return false;
  }

  // Obtain a reference to the service we are after in the remote BLE server.
  BLERemoteService* pRemoteService = pClient->getService(serviceUUID);
  if (pRemoteService == nullptr) {
    Serial.print("Failed to find our service UUID: ");
    Serial.println(serviceUUID.toString().c_str());
    pClient->disconnect();
    return false;
  } else {
    Serial.println("Got Service");
  }

  // Obtain a reference to the characteristic in the service of the remote BLE server.
  pRemoteCharacteristic_write = pRemoteService->getCharacteristic(charUUID_write);
  if (pRemoteCharacteristic_write == nullptr) {
    Serial.print("Failed to find our characteristic UUID: ");
    Serial.println(charUUID_write.toString().c_str());
    pClient->disconnect();
    return false;
  } else {
    Serial.println("Got write characteristic");
  }

  pRemoteCharacteristic_read = pRemoteService->getCharacteristic(charUUID_read);
  if (pRemoteCharacteristic_read == nullptr) {
    Serial.print("Failed to find our characteristic UUID: ");
    Serial.println(charUUID_write.toString().c_str());
    pClient->disconnect();
    return false;
  } else {
    Serial.println("Got read characteristic");
  }

  if(pRemoteCharacteristic_read->canNotify()) {
    pRemoteCharacteristic_read->registerForNotify(notifyCallback);
    Serial.println("can notify..");
  }
  
  return true;
}