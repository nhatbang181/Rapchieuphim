#include "ve.h"
class maychu
{
private:
    ve* danhsachve;
    int sove;
    phim* danhsachphim;
    int sophim;
    int doanhsohangthang;
public:
    maychu();
    ~maychu();
    int getdoanhsohangthang();
    int getsove();
    int getsophim();
    ve* getdanhsachve();
    phim* getdanhsachphim();
    void themve(ve);
    void xoave(ve);
    friend class admin;
    friend class rap;
};