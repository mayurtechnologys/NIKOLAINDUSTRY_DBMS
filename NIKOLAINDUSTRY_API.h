#include "NIKOLAINDUSTRY_API.h"

class NIKOLAINDUSTRY_API {
public:
    NIKOLAINDUSTRY_API(const char* ssid, const char* password);

    // Function to write data to the database
    String writeDataToDatabase(const char* userId, const char* itemId);

    // Function to read data from the database
    String readDataFromDatabase(const char* itemId);

    // Function to update data in the database
    String updateDataInDatabase(const char* userId, const char* itemId);

    // Function to read all data from the database
    String readAllDatabaseData();

private:
    const char* _ssid;
    const char* _password;
    WiFiClient _client;
};
