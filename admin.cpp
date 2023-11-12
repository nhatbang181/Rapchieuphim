#include "admin.h"

admin::admin()
{
}
admin::~admin()
{
}
void admin::setusername(string s)
{
    username = s;
}
void admin::setpassword(string s)
{
    password = s;
}
void admin::dangkitaikhoan()
{
    getline(cin, username);
    string tmppassword;
    while (true)
    {
        char ch = _getch(); // Hàm getch() từ thư viện <conio.h> dùng để nhận một ký tự từ bàn phím mà không hiển thị lên màn hình

        if (ch == 13)
        { // 13 tương ứng với phím Enter
            break;
        }
        else if (ch == 8)
        { // 8 tương ứng với phím Backspace
            if (!(tmppassword).empty())
            {
                (tmppassword).pop_back();
                cout << "\b \b"; // Xóa ký tự cuối cùng được hiển thị
            }
        }
        else
        {
            (tmppassword).push_back(ch);
            cout << "*";
        }
    }

    password = (tmppassword);
}
string admin::getusername()
{
    return username;
}
string admin::getpassword()
{
    return password;
}
void admin::xacnhandatve(int i, int j, phong& p)
{
    p.ghengoi[i][j] = true;
}
bool admin::ktrafull(phong p)
{
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 14; j++)
        {
            if (p.ghengoi[i][j] == false)
                return false;
        }
    }
    return true;
}
void admin::nhapphim(const string name_file)
{
    ifstream i;
    i.open(name_file);
    string tmp;
    int count = 1;
    while (getline(i, tmp))
    {
        count++;
    }
    i.close();
    ofstream o;
    phim p;
    cin >> p;
    o.open(name_file, ios::app);
    if (count != 1) o << endl;
    o << p.gettenphim() << endl;
    o << p.getgiave() << endl;
    o << p.getdaodien() << endl;
    o << p.gettheloai() << endl;
    o << p.getkhoichieu().getphut() << endl ;
    o << p.getkhoichieu().getgio() << endl;
    o << p.getkhoichieu().getngay() << endl;
    o << p.getkhoichieu().getthang() << endl;
    o << p.getkhoichieu().getnam() << endl;
    o << p.getthoiluong() << endl;
    o << p.getngonngu() << endl;
    o << p.getgioithieuphim() << endl;
    o << p.getage() << endl;
    o.close();
}
void admin::setid(string s, phim& p)
{
    p.id = s;
}
void admin::settenphim(string s, phim& p)
{
    p.tenphim = s;
}
void admin::setgiave(int s, phim& p)
{
    p.giave = s;
}
void admin::setdaodien(string s, phim& p)
{
    p.daodien = s;
}
void admin::setgiochieu(int a, phim& p) { p.khoichieu.setgio(a); }
void admin::setphutchieu(int a, phim& p ) { p.khoichieu.setphut(a); }
void admin::setngaychieu(int a, phim& p) { p.khoichieu.setngay(a); }
void admin::setthangchieu(int a, phim& p) { p.khoichieu.setthang(a); }
void admin::setnamchieu(int a, phim& p) { p.khoichieu.setnam(a); }
void admin::settheloai(string s, phim&p)
{
    p.theloai = s;
}
void admin::setkhoichieu(Time T, phim& p)
{
    p.khoichieu = T;
}
void admin::sethankhoichieu(phim& p)
{
    if (p.khoichieu.getngay() >= 15 && p.khoichieu.getthang() == 2)
    {
        p.hankhoichieu.setngay(p.khoichieu.getngay() + 14 - 28);
        p.hankhoichieu.setthang(p.khoichieu.getthang() + 1);
        p.hankhoichieu.setnam(p.khoichieu.getnam());
    }
    else if (p.khoichieu.getngay() >= 18 && p.khoichieu.getthang() == 12)
    {
        p.hankhoichieu.setngay(p.khoichieu.getngay() + 14 - 31);
        p.hankhoichieu.setthang(1);
        p.hankhoichieu.setnam(p.khoichieu.getnam() + 1);
    }
    else if (p.khoichieu.getngay() >= 17 && (p.khoichieu.getthang() == 4 || p.khoichieu.getthang() == 6 || p.khoichieu.getthang() == 9 || p.khoichieu.getthang() == 11))
    {
        p.hankhoichieu.setngay(p.khoichieu.getngay() + 14 - 30);
        p.hankhoichieu.setthang(p.khoichieu.getthang() + 1);
        p.hankhoichieu.setnam(p.khoichieu.getnam());
    }
    else if (p.khoichieu.getngay() >= 18 && (p.khoichieu.getthang() == 1 || p.khoichieu.getthang() == 3 || p.khoichieu.getthang() == 5 || p.khoichieu.getthang() == 7 || p.khoichieu.getthang() == 8 || p.khoichieu.getthang() == 10))
    {
        p.hankhoichieu.setngay(p.khoichieu.getngay() + 14 - 31);
        p.hankhoichieu.setthang(p.khoichieu.getthang() + 1);
        p.hankhoichieu.setnam(p.khoichieu.getnam());
    }
    else
    {
        p.hankhoichieu.setngay(p.khoichieu.getngay() + 14);
        p.hankhoichieu.setthang(p.khoichieu.getthang());
        p.hankhoichieu.setnam(p.khoichieu.getnam());
    }
    p.hankhoichieu.setphut(p.khoichieu.getphut());
    p.hankhoichieu.setgio(p.khoichieu.getgio());
}
void admin::setsosuatchieu(int n, phim& p)
{
    p.sosuatchieu = n;
}
void admin::setthoiluong(int s, phim& p)
{
    p.thoiluong = s;
}
void admin::setngonngu(string s, phim& p)
{
    p.ngonngu = s;
}
void admin::setgioithieuphim(string s, phim& p)
{
    p.gioithieuphim = s;
}
void admin::setage(string s, phim& p)
{
    p.age = s;
}
// g++ test.cpp thuvienadmin.cpp -o bangdz
void admin::setphim(phim& p)
{
    getline(cin, p.tenphim);
    cin >> p.giave;
    cin.ignore();
    getline(cin, p.daodien);
    getline(cin, p.theloai);
    cin >> p.khoichieu;
    this->sethankhoichieu(p);
    cin >> p.thoiluong;
    cin.ignore();
    getline(cin, p.ngonngu);
    getline(cin, p.gioithieuphim);
    cin >> p.age;
    cin.ignore();
}

void admin::themsuatchieu(suatchieu& sc, phim& p)
{
    if (p.sosuatchieu == 0)
    {
        p.danhsachsuatchieu = new suatchieu[1];
        *(p.danhsachsuatchieu + 0) = sc;
        p.sosuatchieu++;
    }
    else
    {
        suatchieu* tmp = new suatchieu[p.sosuatchieu + 1];
        for (int i = 0; i < p.sosuatchieu; i++)
        {
            *(tmp + i) = *(p.danhsachsuatchieu + i);
        }
        *(tmp + p.sosuatchieu) = sc;
        delete[] p.danhsachsuatchieu;
        p.sosuatchieu++;
        p.danhsachsuatchieu = new suatchieu[p.sosuatchieu];
        for (int i = 0; i < p.sosuatchieu; i++)
        {
            *(p.danhsachsuatchieu + i) = *(tmp + i);
        }
        delete[] tmp;
    }
    sc.setphimchieu(p.getcontrophim());
}
void admin::setngaychieuphim(Time T) { rapquanly.ngaychieuphim = T; }
void admin::setphong(int i, int j, phong p) { rapquanly.danhsachphong[i][j] = p; }
void admin::setmaychu(maychu mc) { rapquanly.maychurap = mc; }
void admin::nhaprap()
{
    // cout << "Nhap ten rap :";
    // getline(cin, rapquanly.tenrap);
    // cout << "Nhap dia chi rap :";
    // getline(cin, rapquanly.diachi);

    rapquanly.tenrap = "CGV DA NANG";
    rapquanly.diachi = "Lien Chieu ";
    for (int o = 0; o < 8; o++)
    {
        ((rapquanly.danhsachphong[0][0].suat[o])).setgiochieu(7 + (2 * o), 45);
        ((rapquanly.danhsachphong[0][1].suat[o])).setgiochieu(7 + 1 + (2 * o), 0);
        ((rapquanly.danhsachphong[0][2].suat[o])).setgiochieu(7 + 1 + (2 * o), 15);
    }
    for (int o = 0; o < 3; o++)
    {
        for (int k = 0; k < 8; k++)
        {
            if (o == 0)
            {
                rapquanly.danhsachphong[0][o].suat[k].setgioketthucfirst(rapquanly.danhsachphong[0][o].suat[k].getthoigianchieu().getgio() + 2);
                rapquanly.danhsachphong[0][o].suat[k].setgioketthucsecond(rapquanly.danhsachphong[0][o].suat[k].getthoigianchieu().getphut() + 45 - 60);
            }
            else if (o == 1)
            {
                rapquanly.danhsachphong[0][o].suat[k].setgioketthucfirst(rapquanly.danhsachphong[0][o].suat[k].getthoigianchieu().getgio() + 2);
                rapquanly.danhsachphong[0][o].suat[k].setgioketthucsecond(rapquanly.danhsachphong[0][o].suat[k].getthoigianchieu().getphut() + 45);
            }
            else
            {
                rapquanly.danhsachphong[0][o].suat[k].setgioketthucfirst(rapquanly.danhsachphong[0][o].suat[k].getthoigianchieu().getgio() + 2);
                rapquanly.danhsachphong[0][o].suat[k].setgioketthucsecond(rapquanly.danhsachphong[0][o].suat[k].getthoigianchieu().getphut() - 15);
            }
        }
    }
    for (int g = 0; g < 10; g++)
    {
        for (int o = 0; o < 3; o++)
        {
            for (int k = 0; k < 8; k++)
            {
                rapquanly.danhsachphong[g][o].suat[k].setgiochieu(rapquanly.danhsachphong[0][o].suat[k].getthoigianchieu().getgio(), rapquanly.danhsachphong[0][o].suat[k].getthoigianchieu().getphut());
                rapquanly.danhsachphong[g][o].suat[k].setgioketthucfirst(rapquanly.danhsachphong[0][o].suat[k].getthoigianchieu().getgio());
                rapquanly.danhsachphong[g][o].suat[k].setgioketthucsecond(rapquanly.danhsachphong[0][o].suat[k].getthoigianchieu().getphut());
            }
        }
    }
}
void admin::datve()
{
    now homnay;
    Time TmpT;
    //// CHON PHIM
    cout << "Ban muon xem phim gi ?" << endl;
    for (int j = 0; j < 10; j++)
    {
        (TmpT).congngay(rapquanly.ngaychieuphim, j);
        phimchieutrongngay((TmpT));
    }
    cout << "Nhap ngay ban muon xem phim : " << endl;
    int k;
    cin >> k;
    cin.ignore();
    for (int i = 0; i < 10; i++)
    {
        if (k == rapquanly.ngaychieuphim.getngay() + i)
        {
            (TmpT).congngay(rapquanly.ngaychieuphim, i);
            break;
        }
    }
    phimchieutrongngay(TmpT);
    cout << "Nhap phim ban muon xem : " << endl;
    string tmp;
    getline(cin, tmp);
    phim tmpphim;
    tmpphim = getphim((tmp));
    cout << tmpphim;
    for (int l = 0; l < tmpphim.sosuatchieu; l++)
    {
        if ((*(tmpphim.danhsachsuatchieu + l)).getthoigianchieu().equalday(TmpT))
        {
            (*(tmpphim.danhsachsuatchieu + l)).xuatgiochieu();
        }
    }
    cout << endl
        << "Nhap suat chieu ban muon xem : " << endl;
    int tmpphut = 0 ;
    int tmpgio = 0;
    string tmp2;
    getline(cin, tmp2);
    if ((int)tmp2[2] > 57 || (int)tmp2[2] < 48) {
        tmpgio = ((int)((tmp2)[0]) - 48) * 10 + ((int)((tmp2)[1]) - 48);

        if (tmp2.length() == 4) {
            tmpphut = ((int)((tmp2)[3]) - 48);
        }
        else {
            tmpphut = ((int)((tmp2)[3]) - 48) * 10 + ((int)((tmp2)[4]) - 48);
        }
    }
    else if (tmp2[1] > 57 || tmp2[1] < 48) {
        tmpgio = ((int)((tmp2)[0]) - 48);
        if (tmp2.length() == 3) {
            tmpphut = ((int)((tmp2)[2]) - 48);
        }
        else {
            tmpphut = ((int)((tmp2)[2]) - 48) * 10 + ((int)((tmp2)[3]) - 48);
        }
    }
    suatchieu tmpsc;
    tmpsc = getsuatchieu(tmpgio, tmpphut, TmpT);
    cout << "Chon cho ngoi : " << endl;
    (*((tmpsc).phongchieu)).hienthighe();
    string tmpghe;
    getline(cin, tmpghe);
    int tmpghe1= 0 ;
    int tmpghe2 = 0;
    string tmpghestring;
    for (int i = 0; i < (tmpghe).length(); i++)
    {
        if ((tmpghe)[i] <= 76 && (tmpghe)[i] >= 65)
        {
            (tmpghestring) += (tmpghe)[i];
            (tmpghe1) = (int)(tmpghe)[i] - 65;
        }
        else if ((tmpghe)[i] >= 97 && (tmpghe)[i] <= 118)
        {
            (tmpghestring) += (tmpghe)[i];
            (tmpghe1) = (int)(tmpghe)[i] - 97;
        }
        else if ((tmpghe)[i] >= 48 && (tmpghe)[i] <= 57)
        {
            (tmpghestring) += (tmpghe)[i];
            (tmpghe2) = (int)(tmpghe)[i] - 48;
        }
        else
            continue;
    }
    cout << "Chon Bap, nuoc  : " << endl;
    string tmpbap;
    string tmpnuoc;
    cout << "Bap : ";
    getline(cin, tmpbap);
    cout << "Nuoc : ";
    getline(cin, tmpnuoc);
    ve v(TmpT, homnay, tmpbap, tmpnuoc, tmpsc, tmpghestring);
    rapquanly.maychurap.themve(v);
    xacnhandatve(tmpghe1, tmpghe2, (*(tmpsc).phongchieu));
    (*(tmpsc).phongchieu).hienthighe();
    cout << v;
}

void admin::quanlychieuphim()
{
    if (((*(rapquanly.maychurap.danhsachphim + 0)).sosuatchieu) > 0)
    {
        for (int i = 0; i < rapquanly.maychurap.sophim; i++)
        {
            delete[](*(rapquanly.maychurap.danhsachphim + i)).danhsachsuatchieu;
            (*(rapquanly.maychurap.danhsachphim + i)).danhsachsuatchieu = new suatchieu;
            (*(rapquanly.maychurap.danhsachphim + i)).sosuatchieu = 0;
        }
    }
    now n;
    n.gancho(rapquanly.ngaychieuphim);
    double tmp;
    tmp = (double)rapquanly.maychurap.getsophim();
    double tmp1;
    tmp1 = (double)240 / tmp;
    int i, r, j, tmpj, tmpk, tmpo;
    i = 1;
    double kq;
    do
    {
        kq = tmp1 / (double)(i); // so ngay chieu
        i++;                     /// suat chieu 1 ngay
    } while (kq <= 10);
    // nhung ngay dau tien
    i--;
    r = 0;
    tmpj = 0;
    int k = 0;
    int l;
    l = 0;
    int o;
    double tmp3;
    int tmpjj;
    tmpjj = 10;
    bool tran = false ;
    while (kq >= 1)
    {
        // gan lai kq
        for (j = tmpj; j < tmpjj; j++)
            // for (int j = 0 ; j < 10; j ++ )
        {
            // phong
            k = 0;
            while (k < 3)
            {
                // suat chieu
                l = 0;
                while (l < 8)
                {
                    // so suat chieu 1 ngay
                    o = l;
                    while (o < l + i)
                    {
                        if (o >= 8)
                        {
                            tran = true;
                            break;
                        }
                        tmpk = k;
                        tmpo = o;
                        (rapquanly.danhsachphong)[j][k].suat[o].phongchieu = &((rapquanly.danhsachphong)[j][k]);
                        (rapquanly.danhsachphong)[j][k].suat[o].phimchieu = (rapquanly.maychurap.danhsachphim + r);
                        (rapquanly.danhsachphong)[j][k].suat[o].thoigianchieu.congngay(rapquanly.ngaychieuphim, j);
                        themsuatchieu(((rapquanly.danhsachphong)[j][k].suat[o]), (*(rapquanly.maychurap.danhsachphim + r)));
                        r = r + 1;
                        if (r == rapquanly.maychurap.getsophim())
                        {
                            r = 0;
                        }
                        (o)++;
                    }
                    if (tran == true)
                        break;
                    l += i;
                }
                k++;
                tran = false;
            }
        }
        tmpj = (int)kq;
        tmp3 = (kq - ((int)kq)) * (i) * (tmp);
        tmp1 = tmp3 / rapquanly.maychurap.getsophim();
        i--;
        int tmp2 = 10 - (int)kq;
        do
        {
            kq = tmp1 / (double)(i); // so ngay chieu
            i--;                     /// suat chieu 1 ngay
        } while (kq <= tmp2);
        tmpjj = tmpj + (int)kq;
        // nhung ngay dau tien
        i++;
    }
    if (tmpk != 2 && tmpo != 7 && tmpjj != 9)
    {
        tran = false;
        k = tmpk;
        j = 9;
        while (k < 3)
        {
            // suat chieu
            l = 0;

            while (l < 8)
            {
                if (tran == true)
                {
                    l = tmpo + 1;
                    if (l == 8)
                    {
                        tran = true;
                    }
                }
                // so suat chieu 1 ngay
                o = l;
                while (o < l + i)
                {
                    if (o >= 8)
                    {
                        tran = true;
                        break;
                    }

                    tmpk = k;
                    tmpo = o;
                    (rapquanly.danhsachphong)[j][k].suat[o].phongchieu = &((rapquanly.danhsachphong)[j][k]);
                    (rapquanly.danhsachphong)[j][k].suat[o].phimchieu = (rapquanly.maychurap.danhsachphim + r);
                    (rapquanly.danhsachphong)[j][k].suat[o].setthoigianchieu((rapquanly.danhsachphong)[j][k].suat[o].thoigianchieu.congngay(rapquanly.ngaychieuphim, j));
                    themsuatchieu((((rapquanly.danhsachphong)[j][k]).suat[o]), (*(rapquanly.maychurap.danhsachphim + r)));
                    o++;
                    r = r + 1;
                    if (r == rapquanly.maychurap.getsophim())
                    {
                        r = 0;
                    }
                }
                if (tran == true)
                    break;

                l += i;
            }
            k++;
            tran = false;
        }
    }
    for (int i = 0; i < rapquanly.maychurap.getsophim(); i++)
    {
        for (int j = 0; j < (*(rapquanly.maychurap.danhsachphim + i)).sosuatchieu; j++)
        {
            for (int k = j; k < (*(rapquanly.maychurap.danhsachphim + i)).sosuatchieu; k++)
            {
                if ((*((*(rapquanly.maychurap.danhsachphim + i)).danhsachsuatchieu + j)).thoigianchieu.getgio() > ((*((*(rapquanly.maychurap.danhsachphim + i)).danhsachsuatchieu + k))).thoigianchieu.getgio())
                {
                    // Use your 'swap' function to swap the entire 'thoigianchieu' object
                    swap((*((*(rapquanly.maychurap.danhsachphim + i)).danhsachsuatchieu + j)).thoigianchieu, ((*((*(rapquanly.maychurap.danhsachphim + i)).danhsachsuatchieu + k)).thoigianchieu));
                }
            }
        }
    }
}
void admin::swap(Time& T1, Time& T2)
{
    int tmp;
    tmp = T1.getphut();
    T1.setphut(T2.getphut());
    T2.setphut(tmp);
    tmp = T1.getgio();
    T1.setgio(T2.getgio());
    T2.setgio(tmp);
    tmp = T1.getngay();
    T1.setngay(T2.getngay());
    T2.setngay(tmp);
    tmp = T1.getthang();
    T1.setthang(T2.getthang());
    T2.setthang(tmp);
    tmp = T1.getnam();
    T1.setnam(T2.getnam());
    T2.setnam(tmp);
}
void admin::chieuphim()
{
    Time TmpT;
    for (int j = 0; j < 10; j++)
    {
        TmpT.congngay(rapquanly.ngaychieuphim, j);
        phimchieutrongngay(TmpT);
    }
}
suatchieu admin::getsuatchieu(int i, int j, Time T)
{
    int k = T.trungay(rapquanly.ngaychieuphim);
    for (int o = 0; o < 3; o++)
    {
        for (int p = 0; p < 8; p++)
        {
            if (rapquanly.danhsachphong[k][o].suat[p].getthoigianchieu().getgio() == i && rapquanly.danhsachphong[k][o].suat[p].getthoigianchieu().getphut() == j)
            {
                return rapquanly.danhsachphong[k][o].suat[p];
            }
        }
    }
    suatchieu tmpsc;
    return tmpsc;
}

bool compareStrings(const  string& str1, const  string& str2) {
    const size_t  sai = 4;  // Ngưỡng cho phép số lượng ký tự khác nhau

    size_t  t = abs((int)(str1.length() - str2.length()));
    if (t > sai) {
        return false;
    }

    size_t  khac = 0;
    size_t i = 0, j = 0;
    while (i < str1.length() && j < str2.length()) {
        if (tolower(str1[i]) != tolower(str2[j])) {
            ++khac;
            if (khac > sai) {
                return false;
            }
            if (str1.length() > str2.length()) {
                ++i;
            }
            else if (str2.length() > str1.length()) {
                ++j;
            }
            else {
                ++i;
                ++j;
            }
        }
        else {
            ++i;
            ++j;
        }
    }
    return  khac <= sai;
}
phim admin::getphimtuid(string tmp1) {
    for (int i = 0; i < rapquanly.maychurap.sophim; i++)
    {
        if ((*(rapquanly.maychurap.danhsachphim + i)).id == tmp1) return (*(rapquanly.maychurap.danhsachphim + i));
        
    }
    phim tmp43;
    return tmp43;
}
phim admin::getphim(string tmp1)
{
    for (int i = 0; i < rapquanly.maychurap.sophim; i++)
    {
        string tmp = (*(rapquanly.maychurap.danhsachphim + i)).tenphim;
        if (compareStrings(tmp, tmp1))
        {
            return *(rapquanly.maychurap.danhsachphim + i);
        }
    }
    phim tmp43;
    return tmp43;
}
void admin::xoaphim(phim p)
{
    if (rapquanly.maychurap.sophim != 0)
    {
        phim* tmp = new phim[rapquanly.maychurap.sophim - 1];
        for (int i = 0; i < rapquanly.maychurap.sophim; i++)
        {
            if (*(rapquanly.maychurap.danhsachphim + i) == p)
            {
                for (int j = i + 1; j < rapquanly.maychurap.sophim; j++)
                {
                    *(tmp + i) = *(rapquanly.maychurap.danhsachphim + j);
                }
                break;
            }
            else
            {
                *(tmp + i) = *(rapquanly.maychurap.danhsachphim + i);
            }
        }
        delete[] rapquanly.maychurap.danhsachphim;
        rapquanly.maychurap.danhsachphim = new phim[rapquanly.maychurap.sophim - 1];
        for (int i = 0; i < rapquanly.maychurap.sophim - 1; i++)
        {
            *(rapquanly.maychurap.danhsachphim + i) = *(tmp + i);
        }
        delete[] tmp;
        rapquanly.maychurap.sophim -= 1;
    }
}
int ConvertToInt(string s) {
    int result = 0;
    int multiply = 1;

    for (int i = s.length() - 1; i >= 0; --i) {
        if (isdigit(s[i])) {
            result += (s[i] - '0') * multiply;
            multiply *= 10;
        }
        else {
            return 0;
        }
    }

    return result;
}
string increaseString(string str) {
    string str1;
    str1 = "000";
    if (str[2] == '9') {
        if (str[1] == '9') {
            (str1[0]) = (str[0]) + 1;
            str1[1] = '0';
            str1[2] = '0';
        }
        else {
            (str1[0]) = (str[0]);
            (str1[1]) = (str[1]) + 1;
            str1[2] = '0';
        }
    }
    else {
        (str1[0]) = (str[0]);
        (str1[1]) = (str[1]);
        (str1[2]) = (str[2]) + 1;
    } 
    return str1;
}
void admin::themphim(string namefile)
{
    delete[] rapquanly.maychurap.danhsachphim;
    rapquanly.maychurap.sophim = 0;
    ifstream i;
    i.open(namefile, ios::in);
    if (!i.is_open()) return;
    int tmpcount = 1;
    string tmp;
    while (getline(i,tmp) ){
        tmpcount++;
    }
    i.close();
    rapquanly.maychurap.danhsachphim = new phim[tmpcount];
        string line;
        int count = 1;
        int countphim = 0;
        i.open(namefile, ios::in);
        if (!i.is_open()) return;
        while (getline(i,line)){
            switch (count % 13) {
            case 0:         
                setage(line, rapquanly.maychurap.danhsachphim[countphim]);
                break;
            case 1:
                settenphim(line, rapquanly.maychurap.danhsachphim[countphim ]);
                break;
            case 2:
                setgiave(ConvertToInt(line), rapquanly.maychurap.danhsachphim[countphim ]);
                break;
            case 3:
                setdaodien(line, rapquanly.maychurap.danhsachphim[countphim ]);
                break;
            case 4:
                settheloai(line, rapquanly.maychurap.danhsachphim[countphim]);
                break;
            case 5:                 
                setgiochieu(ConvertToInt(line), rapquanly.maychurap.danhsachphim[countphim ]);
                break;
            case 6:                 
                setphutchieu(ConvertToInt(line), rapquanly.maychurap.danhsachphim[countphim ]);
                break;
            case 7:                 
                setngaychieu(ConvertToInt(line), rapquanly.maychurap.danhsachphim[countphim ]);
                break;
            case 8:                 
                setthangchieu(ConvertToInt(line), rapquanly.maychurap.danhsachphim[countphim]);
                break;
            case 9:
                setnamchieu(ConvertToInt(line), rapquanly.maychurap.danhsachphim[countphim ]);
                break;
            case 10:
                setthoiluong(ConvertToInt(line), rapquanly.maychurap.danhsachphim[countphim ]);
                break;
            case 11:
                setngonngu(line, rapquanly.maychurap.danhsachphim[countphim ]);
                break;
            case 12:
                setgioithieuphim(line, rapquanly.maychurap.danhsachphim[countphim ]);
                break;
            default:
                break;
   }
          count++;
          if ((count % 13) == 1) {
              rapquanly.maychurap.danhsachphim[countphim].sethankhoichieu();
              if (countphim == 0) { setid("000", rapquanly.maychurap.danhsachphim[countphim]); }
              else {
                  setid( increaseString(rapquanly.maychurap.danhsachphim[countphim-1].getid()), rapquanly.maychurap.danhsachphim[countphim]);
              }
              countphim++;
          }
        }
        i.close();
    
   
    rapquanly.maychurap.sophim += countphim;
}

void admin::xuatphim() {
    for (int i = 0; i < rapquanly.maychurap.sophim; i++) {
        cout << rapquanly.maychurap.danhsachphim[i];
    }
}

void admin::nhapsuatchieu(const string name_file) {
    ofstream o;
    o.open(name_file, ios::trunc);
    for (int i = 0; i < rapquanly.maychurap.sophim; i++) {
        o << rapquanly.maychurap.danhsachphim[i].getid() << endl;
        for (int j = 0; j < rapquanly.maychurap.danhsachphim[i].sosuatchieu; j++) {
            o << rapquanly.maychurap.danhsachphim[i].danhsachsuatchieu[j].getthoigianchieu().getgio() << ":";
            o << rapquanly.maychurap.danhsachphim[i].danhsachsuatchieu[j].getthoigianchieu().getphut() << " ";
            o << rapquanly.maychurap.danhsachphim[i].danhsachsuatchieu[j].getthoigianchieu().getngay() << "/";
            o << rapquanly.maychurap.danhsachphim[i].danhsachsuatchieu[j].getthoigianchieu().getthang() << "/";
            o << rapquanly.maychurap.danhsachphim[i].danhsachsuatchieu[j].getthoigianchieu().getnam() << endl;
        }
    }

    o.close();
}



void admin::themphim(phim sc)
{
    if (rapquanly.maychurap.sophim == 0)
    {
        delete[] rapquanly.maychurap.danhsachphim; 
        rapquanly.maychurap.danhsachphim = new phim[1];
        *(rapquanly.maychurap.danhsachphim + 0) = sc;
        setid("001", (*(rapquanly.maychurap.danhsachphim + 0)));
        rapquanly.maychurap.sophim++;
    }
    else
    {
        phim* tmp = new phim[rapquanly.maychurap.sophim + 1];
        for (int i = 0; i < rapquanly.maychurap.sophim; i++)
        {
            *(tmp + i) = *(rapquanly.maychurap.danhsachphim + i);
        }
        *(tmp + rapquanly.maychurap.sophim) = sc;
        delete[] rapquanly.maychurap.danhsachphim;
        rapquanly.maychurap.sophim++;
        rapquanly.maychurap.danhsachphim = new phim[rapquanly.maychurap.sophim];
        int r = 0;
        for (int i = 0; i < rapquanly.maychurap.sophim; i++)
        {
            *(rapquanly.maychurap.danhsachphim + i) = *(tmp + i);
        }
        r = rapquanly.maychurap.sophim - 1;
        setid(increaseString((*(rapquanly.maychurap.danhsachphim + (r - 1))).getid()), (*(rapquanly.maychurap.danhsachphim + r)));

        delete[] tmp;

    }
    quanlychieuphim();
}
void admin::phimchieutrongngay(Time T)
{
    for (int i = 0; i < rapquanly.maychurap.sophim; i++)
    {
        for (int j = 0; j < (*(rapquanly.maychurap.danhsachphim + i)).sosuatchieu; j++)
        {
            if ((((*((*(rapquanly.maychurap.danhsachphim + i)).danhsachsuatchieu + j))).getthoigianchieu()).equalday(T))
            {
                ((*((*(rapquanly.maychurap.danhsachphim + i)).danhsachsuatchieu + j)).getthoigianchieu()).xuatngay();
                cout << *(rapquanly.maychurap.danhsachphim + i);
                for (int l = 0; l < (*(rapquanly.maychurap.danhsachphim + i)).sosuatchieu; l++)
                {
                    if ((((*((*(rapquanly.maychurap.danhsachphim + i)).danhsachsuatchieu + l))).getthoigianchieu()).equalday(T))
                    {
                        ((*((*(rapquanly.maychurap.danhsachphim + i)).danhsachsuatchieu + l))).xuatgiochieu();
                    }
                }
                cout << " " << endl;
                break;
            }
        }
    }
}