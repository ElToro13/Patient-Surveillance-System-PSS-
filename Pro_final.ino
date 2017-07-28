#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <Wire.h>
#include "SSD1306.h"
SSD1306  display(0x3C, 4, 5);
MDNSResponder mdns;

// Replace with your network credentials
const char* ssid = "Pompie";
const char* password = "YashSoni13495";

ESP8266WebServer server(80);


void setup(){
 System_Init();
}

void loop(){
 server.handleClient();
// server.send(200, "text/html",Refresh)
}


