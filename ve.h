#pragma once
#include "phong.h"
class ve
{
private:
    string id;
    int giave;
    Time ngayxem;
    now ngaydat;
    string bap;
    string nuoc;
    suatchieu sc;
    string ghengoi;
public:
    ve();
    ve(Time, now, string, string, suatchieu, string);
    ~ve();
    string getid();
    int getgiave();
    Time getngayxem();
    now getngaydat();
    string getbap();
    string getnuoc();
    suatchieu getsc();
    string getghengoi();
    void setid(string);
    void setgiave(int);
    void setngayxem(Time);
    void setngaydat(Time);
    void setbap(string);
    void setnuoc(string);
    void setsc(suatchieu);
    void setghengoi(string);
    bool operator==(ve);
    friend ostream& operator<<(ostream&, ve);
    ve operator=(ve);
    friend class maychu;
};