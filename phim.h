#pragma once
#include "suatchieu.h"
class phim
{
private:
    string id;
    string tenphim;
    int giave;
    string daodien;
    string theloai;
    Time khoichieu;
    Time hankhoichieu;
    int thoiluong;
    string ngonngu;
    string gioithieuphim;
    string age;
    suatchieu* danhsachsuatchieu;
    int sosuatchieu;
public:
    phim();
    phim operator=(phim);
    ~phim();
    string getid();
    string gettenphim();
    int getgiave();
    string getdaodien();
    string gettheloai();
    Time getkhoichieu();
    Time gethankhoichieu();
    int getthoiluong();
    string getngonngu();
    string getgioithieuphim();
    string getage();
    suatchieu* getdanhsachsuatchieu();
    int getsosuatchieu();
    void sethankhoichieu();
    phim* getcontrophim();
    friend ostream& operator<<(ostream&, phim);
    bool operator==(phim);
    suatchieu suatchieuluc(int, int);
    friend class admin;
    friend class rap;
    friend istream& operator>>(istream&, phim&);
    friend class maychu;
    friend class ve;
};