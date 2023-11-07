#pragma once
#include "now.h"
class phong;
class phim;
class Time;

class suatchieu
{
private:
    Time thoigianchieu;
    pair<int, int> gioketthuc;
    phim* phimchieu;
    phong* phongchieu;
public:
    suatchieu();
    Time getthoigianchieu();
    phim* getphimchieu();
    phong* getphongchieu();
    pair<int, int> getgioketthuc();
    void setphongchieu(phong*);
    void setphimchieu(phim*);
    void setthoigianchieu(Time);
    void setgiochieu(int, int);
    void setgioketthucfirst(int);
    void setgioketthucsecond(int);
    void xuatgiochieu();
    void xuatthoigianchieu();
    void xuatgioketthuc();
    void operator=(suatchieu);
    friend class phong;
    friend class admin;
};