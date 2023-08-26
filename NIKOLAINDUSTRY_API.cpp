// NIKOLAINDUSTRY_API.cpp

String NIKOLAINDUSTRY_API::writeDataToDatabase(const char* userId, const char* itemId) {
    if (WiFi.status() != WL_CONNECTED) {
        return "WiFi not connected";
    }

    HTTPClient http;
    String apiEndpoint = "https://nikolaindustry.wixsite.com/nikolaindustry/_functions/writedata?databasekey=fXr6xXPGlGJXivh&userid=" + String(userId) + "&itemid=" + String(itemId);
    http.begin(_client, apiEndpoint);
    http.addHeader("Content-Type", "application/json");
    int httpResponseCode = http.POST("{}"); // You might need to provide the appropriate JSON payload

    if (httpResponseCode > 0) {
        String response = http.getString();
        http.end();
        return response;
    } else {
        http.end();
        return "Error in API request";
    }
}

String NIKOLAINDUSTRY_API::readDataFromDatabase(const char* itemId) {
    // Similar logic as in the writeDataToDatabase function, using GET method
    // Construct the URL and send the GET request
}

String NIKOLAINDUSTRY_API::updateDataInDatabase(const char* userId, const char* itemId) {
    // Similar logic as in the writeDataToDatabase function, using POST method
    // Construct the URL and send the POST request with necessary JSON payload
}

String NIKOLAINDUSTRY_API::readAllDatabaseData() {
    // Similar logic as in the readDataFromDatabase function, using GET method
    // Construct the URL and send the GET request
}
