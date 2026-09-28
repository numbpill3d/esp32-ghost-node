// ghost-node.ino — ESP32 WiFi probe + BLE scanner
#include <WiFi.h>
#include "esp_wifi.h"
#include <BLEDevice.h>
#define LED_PIN 2
void promisc_cb(void *buf, wifi_promiscuous_pkt_type_t type) {
  if (type != WIFI_PKT_MGMT) return;
}
void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("ts,type,mac,rssi");
}
void loop() { delay(1000); }
