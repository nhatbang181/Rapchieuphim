#pragma once
#include "phim.h"
class phong
{
private:
    bool ghengoi[7][11];
    suatchieu suat[8];
public:
    phong();
    ~phong();
    bool getghengoi(int, int);
    suatchieu getsuat(int);
    void setghengoi(int, int, bool);
    void setsuat(int, suatchieu);
    void hienthighe();
    void operator= (phong);
    friend class admin;
    friend class rap;
    friend class suatchieu;
};