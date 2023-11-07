#pragma once
#include "maychu.h"
class rap
{
private:
    string tenrap;
    string diachi;
    /// 10 : 10 ngay chieu phim
    phong danhsachphong[10][3];
    maychu maychurap;
    Time ngaychieuphim;
public:
    rap();
    ~rap();

private:
    maychu getmaychu();
    void datlaiphim();
public:
    string gettenrap();
    string getdiachi();
    /// 10 : 10 ngay chieu phim
    phong getphong(int, int);
    Time getngaychieuphim();
    friend ostream& operator<<(ostream&, const rap&);
public:
    friend class admin;
};
