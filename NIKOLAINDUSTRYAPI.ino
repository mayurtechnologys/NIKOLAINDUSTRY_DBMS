#include <Arduino.h>
#include <WiFi.h>
#include <NIKOLAINDUSTRY_API.h>

// Replace with your WiFi credentials
const char* ssid = "your_wifi_ssid";
const char* password = "your_wifi_password";

// Replace with your actual API credentials
const char* databaseKey = "fXr6xXPGlGJXivh";
const char* userId = "mayurtechnologys16@gmail.com";
const char* itemId = "randomstring";

// Create an instance of the library
NIKOLAINDUSTRY_API api;

void setup() {
    Serial.begin(115200);
    delay(1000);

    // Connect to WiFi
    Serial.println("Connecting to WiFi...");
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.println("Connecting...");
    }
    Serial.println("Connected to WiFi!");
}

void loop() {
    // Write data to the database
    String writeResponse = api.writeDataToDatabase(databaseKey, userId, itemId);
    Serial.println("Write Data Response:");
    Serial.println(writeResponse);

    // Read data from the database
    String readResponse = api.readDataFromDatabase(databaseKey, itemId);
    Serial.println("Read Data Response:");
    Serial.println(readResponse);

    // Update data in the database
    String updateResponse = api.updateDataInDatabase(databaseKey, userId, itemId);
    Serial.println("Update Data Response:");
    Serial.println(updateResponse);

    // Read all data from the database
    String readAllResponse = api.readAllDatabaseData(databaseKey);
    Serial.println("Read All Data Response:");
    Serial.println(readAllResponse);

    delay(5000); // Wait for a while before the next iteration
}
