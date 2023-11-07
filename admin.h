#pragma once
#include "rap.h"
#include<fstream>
class admin
{
private:
    string username;
    string password;
    rap rapquanly;
public:
    admin();
    ~admin();
    void setusername(string);
    void setpassword(string);
    void setid(string, phim&);
    void setphim(phim&);
    void settenphim(string, phim&);
    void setgiave(int, phim&);
    void setdaodien(string, phim&);
    void settheloai(string, phim&);
    void setthoiluong(int, phim&);
    void setngonngu(string, phim&);
    void setgioithieuphim(string, phim&);
    void sethankhoichieu(phim&);
    void setsosuatchieu(int, phim&);
    void setage(int, phim&);
    void setkhoichieu(Time, phim&);
    void themsuatchieu(suatchieu&, phim&);
    void dangkitaikhoan();
    suatchieu getsuatchieu(int, int, Time);
    string getusername();
    string getpassword();
    void swap(Time&, Time&);
    friend bool compareStrings(const string& str1, const string& str2);
    void xacnhandatve(int, int, phong&);
    bool ktrafull(phong);
    void nhapphim(const string name_file);
    void setphong(int, int, phong);
    void setmaychu(maychu);
    void setngaychieuphim(Time);
    void nhaprap();
    void quanlychieuphim();
    void datve();
    void chieuphim();
    void themphim(phim);
    void themphim(int);
    void xoaphim(phim);
    phim getphim(string);
    void phimchieutrongngay(Time);
};