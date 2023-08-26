#ifndef NIKOLAINDUSTRY_API_h
#define NIKOLAINDUSTRY_API_h

#include <Arduino.h>
#include <HTTPClient.h>

class NIKOLAINDUSTRY_API {
public:
    NIKOLAINDUSTRY_API();
    String writeDataToDatabase(const char* databaseKey, const char* userId, const char* itemId);
    String readDataFromDatabase(const char* databaseKey, const char* itemId);
    String updateDataInDatabase(const char* databaseKey, const char* userId, const char* itemId);
    String readAllDatabaseData(const char* databaseKey);
private:
    HTTPClient http;
};

#endif
