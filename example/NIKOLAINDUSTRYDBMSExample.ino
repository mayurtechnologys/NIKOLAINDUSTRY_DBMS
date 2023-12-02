#include <WiFi.h>
#include "NIKOLAINDUSTRY_DBMS.h"

const char* ssid = "NIKOLA";        // Replace with your network SSID
const char* password = "12345678";  // Replace with your network password

String userid = "mayurtechnologys16@gmail.com";
NIKOLAINDUSTRY_DBMS dbms;

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  dbms.init(userid);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
}

void loop() {
  // Check if connected to Wi-Fi before sending data

  if (WiFi.status() == WL_CONNECTED) {
    String data = "&Name=Mayur&RollNo=14&PhoneNo=1111111111";
    // Example: Writing data
    String writeResponse = dbms.WriteData("fXr6xXPGlGJXivh", "HrY1Y", data);
    Serial.println("Write Response: " + writeResponse);

    // Example: Reading data
    String readResponse = dbms.ReadData("fXr6xXPGlGJXivh", "HrY1Y");
    Serial.println("Read Response: " + readResponse);

    // Example: Update data
    String updateddata = "&Name=Rupesh&RollNo=13&PhoneNo=888888888";
    String updatedResponse = dbms.UpdateData("fXr6xXPGlGJXivh", "HrY1Y", updateddata);
    Serial.println("Read updated Response: " + updatedResponse);

    // Example: Read All data
    String readallResponse = dbms.ReadAllitems("fXr6xXPGlGJXivh");
    Serial.println(" Read All Response: " + readallResponse);

    delay(3000);
  }
}
