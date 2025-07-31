ble_common.cpp
pBLEScanble_scan_setup() = BLEDevice::getScan();
pBLEScan->setAdvertisedDeviceCallbacks(new AdvertisedDeviceCallbacks());
pBLEScan->setActiveScan(true);  // Active scan uses more power but gets results faster
pBLEScan->setInterval(SCAN_INT);
pBLEScan->setWindow(SCAN_WINDOW);
