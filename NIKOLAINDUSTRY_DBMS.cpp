#include "NIKOLAINDUSTRY_DBMS.h"

NIKOLAINDUSTRY_DBMS::NIKOLAINDUSTRY_DBMS() {
    initialized = false;
   // _userid = userid;
}

void NIKOLAINDUSTRY_DBMS::init(String userid) {
  _userid = userid;
  
  initialized = true;
}

String NIKOLAINDUSTRY_DBMS::WriteData(String databasekey, String itemid, String data) {
    String startapi = "https://nikolaindustry.wixsite.com/nikolaindustry/_functions/writedata?userid=" + _userid + "&databasekey=" + databasekey + "&itemid=" + itemid + "&data=" + data;
    HTTPClient http;
    http.begin(startapi);
    int httpPOSTCode = http.POST(startapi);
    String payload = http.getString();
    http.end();
    return payload;
}

String NIKOLAINDUSTRY_DBMS::UpdateData(String databasekey, String itemid, String data) {
    String startapi = "https://nikolaindustry.wixsite.com/nikolaindustry/_functions/updatedata?userid=" + _userid + "&databasekey=" + databasekey + "&itemid=" + itemid + "&data=" + data;
    HTTPClient http;
    http.begin(startapi);
    int httpPOSTCode = http.POST(startapi);
    String payload = http.getString();
    http.end();
    return payload;
}

String NIKOLAINDUSTRY_DBMS::ReadData(String databasekey, String itemid) {
    String readapi = "https://nikolaindustry.wixsite.com/nikolaindustry/_functions/readitemdata?databasekey=" + databasekey + "&itemid=" + itemid;
    HTTPClient http;
    http.begin(readapi);
    int httpCode = http.GET();
    String response;
    if (httpCode > 0) {
        response = http.getString();
    }
    http.end();
    return response;
}

String NIKOLAINDUSTRY_DBMS::ReadAllitems(String databasekey) {
    String readapi = "https://nikolaindustry.wixsite.com/nikolaindustry/_functions/readitemdata?databasekey=" + databasekey;
    HTTPClient http;
    http.begin(readapi);
    int httpCode = http.GET();
    String response;
    if (httpCode > 0) {
        response = http.getString();
    }
    http.end();
    return response;
}
