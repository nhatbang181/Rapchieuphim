#include "suatchieu.h"
suatchieu::suatchieu()
{
    phimchieu = NULL;
    phongchieu = NULL;
}

void suatchieu::xuatgiochieu()
{

    cout << thoigianchieu.gio << ":";
    cout << thoigianchieu.phut << " ";
}
phong* suatchieu::getphongchieu()
{
    return phongchieu;
}
void suatchieu::setgioketthucfirst(int i)
{
    gioketthuc.first = i;
}
void suatchieu::setgioketthucsecond(int i)
{
    gioketthuc.second = i;
}
void suatchieu::xuatgioketthuc()
{
    cout << gioketthuc.first;
    cout << ":";
    cout << gioketthuc.second;
}
void suatchieu::setphongchieu(phong* p)
{
    phongchieu = p;
}
void suatchieu::setgiochieu(int i, int  j)
{
    thoigianchieu.gio = i;
    thoigianchieu.phut = j;
    if (thoigianchieu.getphut() >= 15)
    {
        gioketthuc.second = thoigianchieu.getphut() + 45 - 60;
        gioketthuc.first = thoigianchieu.getgio() + 2;
    }
    else
    {
        gioketthuc.second = thoigianchieu.getphut() + 45;
        gioketthuc.first = thoigianchieu.getgio() + 1;
    }
}
void suatchieu::setthoigianchieu(Time T)
{
    thoigianchieu.setngay(T.getngay());
    thoigianchieu.setthang(T.getthang());
    thoigianchieu.setnam(T.getnam());
    thoigianchieu.setgio(T.getgio());
    thoigianchieu.setphut(T.getphut());
    if (thoigianchieu.getphut() >= 15)
    {
        gioketthuc.second = thoigianchieu.getphut() + 45 - 60;
        gioketthuc.first = thoigianchieu.getgio() + 2;
    }
    else
    {
        gioketthuc.second = thoigianchieu.getphut() + 45;
        gioketthuc.first = thoigianchieu.getgio() + 1;
    }
}
void suatchieu::setphimchieu(phim* p)
{
    phimchieu = p;
}
void suatchieu::operator=(suatchieu sc)
{
    this->thoigianchieu = sc.thoigianchieu;
    this->gioketthuc.first = sc.gioketthuc.first;
    this->gioketthuc.second = sc.gioketthuc.second;
    this->phimchieu = sc.phimchieu;
    this->phongchieu = sc.phongchieu;
}
Time suatchieu::getthoigianchieu()
{
    return thoigianchieu;
}
pair<int, int> suatchieu::getgioketthuc()
{
    return gioketthuc;
}
phim* suatchieu::getphimchieu()
{
    return phimchieu;
}
void suatchieu::xuatthoigianchieu() {
    cout << thoigianchieu.gio << ":";
    cout << thoigianchieu.phut << " ";
    cout << thoigianchieu.ngay << "/" << thoigianchieu.thang << " ";
}
// suatchieu suatchieu::operator[](int i) {
//     return ((*this)[i]);
// }