#ifndef NIKOLAINDUSTRY_DBMS_h
#define NIKOLAINDUSTRY_DBMS_h

#include <Arduino.h>
#include <HTTPClient.h>

class NIKOLAINDUSTRY_DBMS
{
public:
    NIKOLAINDUSTRY_DBMS();
    void init(String userid);
    String WriteData(String databasekey, String itemid, String data);
    String UpdateData(String databasekey, String itemid, String data);
    String ReadData(String databasekey, String itemid);
    String ReadAllitems(String databasekey);

private:
    bool initialized;
    String _userid;
};

#endif
