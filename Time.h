#pragma once
#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
protected:
    int phut;
    int gio;
    int ngay;
    int thang;
    int nam;
public:
    Time(int = 0, int = 0, int = 0, int = 0, int = 0);
    ~Time();
    int getphut();
    int getgio();
    int getngay();
    int getthang();
    int getnam();
    void setphut(int);
    void setgio(int);
    void setngay(int);
    void setthang(int);
    void setnam(int);
    friend istream& operator>>(istream&, Time&);
    Time operator=(Time);
    Time operator+(int);
    Time congngay(Time T, int);
    bool operator==(Time);
    bool equalday(Time);
    friend ostream& operator<<(ostream&, const Time&);
    void xuatngay();
    int trungay(Time);
    bool operator>(Time);
    friend class suatchieu;
};