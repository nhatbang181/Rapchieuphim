#include "ve.h"
ve::ve() {
    id = "A";
    giave = 0;
    bap = "A";
    nuoc = "A";
    ghengoi = "A";
}
ve::ve(Time ngayxemm, now ngaydatt, string bapp, string nuocc, suatchieu scc, string ghengoii)
{
    id = "R";
    ngaydat = ngaydatt;
    ngayxem = scc.getthoigianchieu();
    bap = bapp;
    nuoc = nuocc;
    giave = (scc.getphimchieu())->getgiave();
    ghengoi = ghengoii;
    sc = scc;
    int* tmp = new int;
    int* tmp1 = new int;
    string* tmpstring = new string;
    (*tmpstring) = bap + nuoc + ghengoi;
    for (int i = 1; i <= 8; i++)
    {
        if (i == 1)
            *tmp = ngaydat.getphut();
        else if (i == 2)
            *tmp = ngaydat.getgio();
        else if (i == 3)
            *tmp = ngaydat.getngay();
        else if (i == 4)
            *tmp = ngaydat.getthang();
        else if (i == 5)
            *tmp = ngayxem.getphut();
        else if (i == 6)
            *tmp = ngayxem.getgio();
        else if (i == 7)
            *tmp = ngayxem.getngay();
        else if (i == 8)
            *tmp = ngayxem.getthang();
        if (*tmp < 10) { id += (char)((*tmp) + 48); }
        else {
            if (((*tmp + 65) < 97 && (*tmp + 65) > 90) || (*tmp + 65) > 122)
            {

                *tmp1 = *tmp;

                while ((*tmp1) != 0)
                {
                    id += (char)(((*tmp1) % 10) + 48);
                    (*tmp1) /= 10;
                }
            }
            else
            {
                id += (char)(*tmp + 65);
            }
        }
    }
    for (int i = 0; i < (*tmpstring).length(); i++) {
        if ((((int)(*tmpstring)[i]) + 3) <= 57 || ((((int)(*tmpstring)[i]) + 3) >= 65 && (((int)(*tmpstring)[i]) + 3) <= 90))
            id += (char)((int)(*tmpstring)[i] + 3);
        else {
            id += (char)((int)(*tmpstring)[i]);
        }
    }
    delete tmp, tmp1, tmpstring;
}
string ve::getid() { return this->id; }
int ve::getgiave() { return this->giave; }
Time ve::getngayxem() { return this->ngayxem; }
now ve::getngaydat() { return this->ngaydat; }
string ve::getbap() { return this->bap; }
string ve::getnuoc() { return this->nuoc; }
suatchieu ve::getsc() { return this->sc; }
string ve::getghengoi() { return this->ghengoi; }
void ve::setid(string s) { this->id = s; }
void ve::setgiave(int s) { this->giave = s; }
void ve::setngayxem(Time s) { this->ngayxem = s; }
void ve::setbap(string s) { this->bap = s; }
void ve::setnuoc(string s) { this->nuoc = s; }
void ve::setsc(suatchieu sc) { this->sc = sc; }
void ve::setghengoi(string gn) { this->ghengoi = gn; }
ve ve::operator=(ve v) {
    this->id = v.id;
    this->giave = v.giave;
    this->ngayxem = v.ngayxem;
    this->ngaydat = v.ngaydat;
    this->bap = v.bap;
    this->nuoc = v.nuoc;
    this->sc = v.sc;
    this->ghengoi = v.ghengoi;
    return (*this);
}
ostream& operator<<(ostream& o, ve v) {
    o << "ID:" << v.getid() << endl << "Gia ve :" << v.getgiave() << endl;
    o << "Ngay xem " << v.getngayxem() << "Ngay dat " << v.getngaydat() << endl;
    o << "Bap " << v.getbap() << " Nuoc " << v.getnuoc() << endl;
    o << "Gio chieu "; (v.getsc()).xuatgiochieu(); o << endl;
    o << "Ghe " << v.getghengoi();
    return o;
}
bool ve::operator==(ve v) {
    if (v.id != this->id) return false;
    else return true;
}
ve::~ve() {}
