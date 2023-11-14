#pragma once
#include "rap.h"
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
    void setgiochieu(int, phim&);
    void setphutchieu(int, phim&);
    void setngaychieu(int, phim&);
    void setthangchieu(int, phim&);
    void setnamchieu(int, phim&);
    void setdaodien(string, phim&);
    void settheloai(string, phim&);
    void setthoiluong(int, phim&);
    void setngonngu(string, phim&);
    void setgioithieuphim(string, phim&);
    void sethankhoichieu(phim&);
    void setsosuatchieu(int, phim&);
    void setage(string, phim&);
    void setkhoichieu(Time, phim&);
    phim getphimtuid(string);
    void themsuatchieu(suatchieu&, phim&);
    void dangkitaikhoan();
    void nhapphongchieu(string);
    suatchieu getsuatchieu(int, int, Time);
    string getusername();
    string getpassword();
    friend string increasingString(string);
    void swap(Time&, Time&);
    friend bool compareStrings(const string& str1, const string& str2);
    friend int ConvertToInt(string);
    void xacnhandatve(int,int,int, int, string);
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
    void themphim(string);
    void xoaphim(phim);
    phim getphim(string);
    void phimchieutrongngay(Time);
    void xuatphim();
    void nhapsuatchieu(const string );
    void updatedanhsachphong(string);
    void nhapphimchuachieu(const string );
    void chuyenphimchuachieu(const string, const string);
    void writephim(phim, const string);


    void xuatphong();
};