#include "NIKOLAINDUSTRY_API.h"

NIKOLAINDUSTRY_API::NIKOLAINDUSTRY_API() {
    // Constructor if needed
}

String NIKOLAINDUSTRY_API::writeDataToDatabase(const char* databaseKey, const char* userId, const char* itemId) {
    String apiEndpoint = "https://nikolaindustry.wixsite.com/nikolaindustry/_functions/writedata?databasekey=" + String(databaseKey) + "&userid=" + String(userId) + "&itemid=" + String(itemId);
    http.begin(apiEndpoint);
    int httpPOSTCode = http.POST("");
    String payload = http.getString();
    http.end();
    return payload;
}

String NIKOLAINDUSTRY_API::readDataFromDatabase(const char* databaseKey, const char* itemId) {
    String apiEndpoint = "https://nikolaindustry.wixsite.com/nikolaindustry/_functions/readitemdata?databasekey=" + String(databaseKey) + "&itemid=" + String(itemId);
    http.begin(apiEndpoint);
    int httpGETCode = http.GET();
    String payload = http.getString();
    http.end();
    return payload;
}

String NIKOLAINDUSTRY_API::updateDataInDatabase(const char* databaseKey, const char* userId, const char* itemId) {
    String apiEndpoint = "https://nikolaindustry.wixsite.com/nikolaindustry/_functions/updatedata?databasekey=" + String(databaseKey) + "&userid=" + String(userId) + "&itemid=" + String(itemId);
    http.begin(apiEndpoint);
    int httpPOSTCode = http.POST("");
    String payload = http.getString();
    http.end();
    return payload;
}

String NIKOLAINDUSTRY_API::readAllDatabaseData(const char* databaseKey) {
    String apiEndpoint = "https://nikolaindustry.wixsite.com/nikolaindustry/_functions/readalldatabase?databasekey=" + String(databaseKey);
    http.begin(apiEndpoint);
    int httpGETCode = http.GET();
    String payload = http.getString();
    http.end();
    return payload;
}
