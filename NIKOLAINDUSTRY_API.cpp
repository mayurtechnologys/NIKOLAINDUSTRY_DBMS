#include "NIKOLAINDUSTRY_API.h"

NIKOLAINDUSTRY_API::NIKOLAINDUSTRY_API() {
    // Constructor if needed
}

String NIKOLAINDUSTRY_API::writeDataToDatabase() {
    http.begin("https://nikolaindustry.wixsite.com/nikolaindustry/_functions/writedata?databasekey=fXr6xXPGlGJXivh&userid=mayurtechnologys16@gmail.com&itemid=randomstring");
    int httpPOSTCode = http.POST("");
    String payload = http.getString();
    http.end();
    return payload;
}

String NIKOLAINDUSTRY_API::readDataFromDatabase() {
    http.begin("https://nikolaindustry.wixsite.com/nikolaindustry/_functions/readitemdata?databasekey=fXr6xXPGlGJXivh&itemid=randomstring");
    int httpGETCode = http.GET();
    String payload = http.getString();
    http.end();
    return payload;
} 

String NIKOLAINDUSTRY_API::updateDataInDatabase() {
    http.begin("https://nikolaindustry.wixsite.com/nikolaindustry/_functions/updatedata?databasekey=fXr6xXPGlGJXivh&userid=mayurtechnologys16@gmail.com&itemid=randomestring");
    int httpPOSTCode = http.POST("");
    String payload = http.getString();
    http.end();
    return payload;
}

String NIKOLAINDUSTRY_API::readAllDatabaseData() {
    http.begin("https://nikolaindustry.wixsite.com/nikolaindustry/_functions/readalldatabase?databasekey=fXr6xXPGlGJXivh");
    int httpGETCode = http.GET();
    String payload = http.getString();
    http.end();
    return payload;
}
