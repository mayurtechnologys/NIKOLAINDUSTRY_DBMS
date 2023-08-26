#ifndef NIKOLAINDUSTRY_API_h
#define NIKOLAINDUSTRY_API_h

#include <Arduino.h>
#include <HTTPClient.h>

class NIKOLAINDUSTRY_API {
public:
    NIKOLAINDUSTRY_API();
    String writeDataToDatabase();
    String readDataFromDatabase();
    String updateDataInDatabase();
    String readAllDatabaseData();
private:
    HTTPClient http;
};

#endif
