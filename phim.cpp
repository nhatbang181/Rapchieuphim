#include "phim.h"

phim::phim() {
    sosuatchieu = 0;
}
phim::~phim() {}
string phim::getid() { return this->id; }
string phim::gettenphim() { return this->tenphim; };
int phim::getgiave() { return this->giave; };
string phim::getdaodien() { return this->daodien; };
string phim::gettheloai() { return this->theloai; };
Time phim::getkhoichieu() { return this->khoichieu; };
Time phim::gethankhoichieu() { return this->hankhoichieu; };
int phim::getthoiluong() { return this->thoiluong; };
string phim::getngonngu() { return this->ngonngu; };
string phim::getgioithieuphim() { return this->gioithieuphim; };
int phim::getage() { return this->age; };
int phim::getsosuatchieu() { return this->sosuatchieu; }
suatchieu* phim::getdanhsachsuatchieu() { return this->danhsachsuatchieu; }
phim phim::operator=(phim p)
{
    this->id = p.id;
    this->tenphim = p.tenphim;
    this->giave = p.giave;
    this->daodien = p.daodien;
    this->theloai = p.theloai;
    this->khoichieu = p.khoichieu;
    this->hankhoichieu = p.hankhoichieu;
    this->thoiluong = p.thoiluong;
    this->ngonngu = p.ngonngu;
    this->gioithieuphim = p.gioithieuphim;
    this->age = p.age;
    this->danhsachsuatchieu = p.danhsachsuatchieu;
    this->sosuatchieu = p.sosuatchieu;
    return (*this);
}
suatchieu phim::suatchieuluc(int i, int j)
{
    for (int o = 0; o < sosuatchieu; o++)
    {
        if (((*(danhsachsuatchieu + o)).getthoigianchieu()).getphut() == j && ((*(danhsachsuatchieu + o)).getthoigianchieu()).getgio() == i)
            return (*(danhsachsuatchieu + o));
    }
    return *(danhsachsuatchieu + 0);
}
void phim::sethankhoichieu()
{
    if (khoichieu.getngay() >= 15 && khoichieu.getthang() == 2)
    {
        hankhoichieu.setngay(khoichieu.getngay() + 14 - 28);
        hankhoichieu.setthang(khoichieu.getthang() + 1);
        hankhoichieu.setnam(khoichieu.getnam());
    }
    else if (khoichieu.getngay() >= 18 && khoichieu.getthang() == 12)
    {
        hankhoichieu.setngay(khoichieu.getngay() + 14 - 31);
        hankhoichieu.setthang(1);
        hankhoichieu.setnam(khoichieu.getnam() + 1);
    }
    else if (khoichieu.getngay() >= 17 && (khoichieu.getthang() == 4 || khoichieu.getthang() == 6 || khoichieu.getthang() == 9 || khoichieu.getthang() == 11))
    {
        hankhoichieu.setngay(khoichieu.getngay() + 14 - 30);
        hankhoichieu.setthang(khoichieu.getthang() + 1);
        hankhoichieu.setnam(khoichieu.getnam());
    }
    else if (khoichieu.getngay() >= 18 && (khoichieu.getthang() == 1 || khoichieu.getthang() == 3 || khoichieu.getthang() == 5 || khoichieu.getthang() == 7 || khoichieu.getthang() == 8 || khoichieu.getthang() == 10))
    {
        hankhoichieu.setngay(khoichieu.getngay() + 14 - 31);
        hankhoichieu.setthang(khoichieu.getthang() + 1);
        hankhoichieu.setnam(khoichieu.getnam());
    }
    else
    {
        hankhoichieu.setngay(khoichieu.getngay() + 14);
        hankhoichieu.setthang(khoichieu.getthang());
        hankhoichieu.setnam(khoichieu.getnam());
    }
    hankhoichieu.setphut(khoichieu.getphut());
    hankhoichieu.setgio(khoichieu.getgio());
}
istream& operator>>(istream& i, phim& p)
{
    getline(i, p.id);
    getline(i, p.tenphim);
    i >> p.giave;
    i.ignore();
    getline(i, p.daodien);
    getline(i, p.theloai);
    i >> p.khoichieu;
    p.sethankhoichieu();
    i >> p.thoiluong;
    i.ignore();
    getline(i, p.ngonngu);
    getline(i, p.gioithieuphim);
    i >> p.age;
    i.ignore();
    return i;
}

bool phim::operator==(phim p)
{


    if (p.tenphim == tenphim && p.hankhoichieu == this->hankhoichieu && p.giave == giave && p.daodien == daodien && p.theloai == theloai && p.khoichieu == khoichieu && p.thoiluong == thoiluong && p.ngonngu == ngonngu && p.gioithieuphim == gioithieuphim && p.age == age && p.sosuatchieu == sosuatchieu)
        return true;
    else
        return false;
}
ostream& operator<<(ostream& o, phim p)
{
    o << p.id << endl;
    o << p.tenphim << endl;
    o << p.giave << endl;
    o << p.daodien << endl;
    o << p.theloai << endl;
    o << p.khoichieu;
    o << p.hankhoichieu;
    o << p.thoiluong << endl;
    o << p.ngonngu << endl;
    o << p.gioithieuphim << endl;
    o << p.age << endl;
    // for (int i = 0; i < p.sosuatchieu; i++)
    // {
    //     (*(p.danhsachsuatchieu + i)).xuatthoigianchieu();
    //     o << " ";
    // }
    return o;
}
phim* phim::getcontrophim() {
    return this;
}
