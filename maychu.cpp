#include "maychu.h"
maychu::maychu()
{
    danhsachve = NULL;
    danhsachphim = NULL;
    sove = 0;
    sophim = 0;
}
maychu::~maychu()
{
    delete[] danhsachve;
    delete[] danhsachphim;
}
int maychu::getsove()
{
    return sove;
}
int maychu::getsophim()
{
    return sophim;
}
void maychu::themve(ve v)
{
    ////// tao ve
    if (sove == 0)
    {
        danhsachve = new ve[sove + 1];
        *(danhsachve + sove) = v;
        sove++;
    }
    else
    {
        ve* tmp = new ve[sove];
        for (int i = 0; i < sove; i++)
        {
            *(tmp + i) = *(danhsachve + i);
        }
        delete[] danhsachve;
        danhsachve = new ve[sove + 1];
        for (int i = 0; i < sove; i++)
        {
            *(danhsachve + i) = *(tmp + i);
        }
        *(danhsachve + sove) = v;
        delete[] tmp;
        sove++;
    }
    
}
void maychu::updatedanhsachve(string name_file) {
    now n;
    for (int i = 0; i < sove; i++) {
        if ( (*(danhsachve+i)).getsc().getthoigianchieu().getthang() < n.getthang() || (*(danhsachve + i)).getsc().getthoigianchieu().getngay() < n.getngay() || 
            (*(danhsachve + i)).getsc().getthoigianchieu().getgio() < n.getgio() || ((*(danhsachve + i)).getsc().getthoigianchieu().getgio() == n.getgio() && (*(danhsachve + i)).getsc().getthoigianchieu().getphut() + 15 < n.getphut())
            )
        {
            xoave(*(danhsachve + i));
        }
    }
    ofstream o;
    o.open(name_file, ios::trunc);
    if (!o.is_open()) return;
    for (int i = 0; i < sove; i++) {
        o << (*(danhsachve + i)).id << endl;
        o << (*(danhsachve + i)).sc.getphimchieu()->gettenphim() << endl;
        o << (*(danhsachve + i)).giave << endl;
        o << (*(danhsachve + i)).sc.getthoigianchieu();
        o << (*(danhsachve + i)).ngaydat << endl;
        o << (*(danhsachve + i)).bap << endl;
        o << (*(danhsachve + i)).nuoc << endl;
        o << (*(danhsachve + i)).ghengoi << endl;
    }
    o.close();

}
void maychu::xoaphim(phim p)
{
    if ( sophim != 0)
    {
        phim* tmp = new phim[ sophim - 1];
        for (int i = 0; i <  sophim; i++)
        {
            if (*( danhsachphim + i) == p)
            {
                for (int j = i + 1; j <  sophim; j++)
                {
                    *(tmp + i) = *( danhsachphim + j);
                }
                break;
            }
            else
            {
                *(tmp + i) = *( danhsachphim + i);
            }
        }
        delete[]  danhsachphim;
         danhsachphim = new phim[ sophim - 1];
        for (int i = 0; i <  sophim - 1; i++)
        {
            *( danhsachphim + i) = *(tmp + i);
        }
        delete[] tmp;
         sophim -= 1;
    }
}
void maychu::updatedanhsachphim(string name_file) {
    now n;
    for (int i = 0; i < sophim; i++) {
        if ((*(danhsachphim + i)).gethankhoichieu().getthang() < n.getthang() ||
            (*(danhsachphim + i)).gethankhoichieu().getngay() < n.getngay()
          )
        {
            xoaphim(*(danhsachphim + i));
        }
    }
    ofstream o;
    o.open(name_file, ios::trunc);
    if (!o.is_open()) return;
    for (int i = 0; i < sophim; i++) {
        o << (*(danhsachphim + i)).gettenphim() << endl;
        o << (*(danhsachphim + i)).getgiave() << endl;
        o << (*(danhsachphim + i)).getdaodien() << endl;
        o << (*(danhsachphim + i)).gettheloai() << endl;
        o << (*(danhsachphim + i)).getkhoichieu().getphut() << endl;
        o << (*(danhsachphim + i)).getkhoichieu().getgio() << endl;
        o << (*(danhsachphim + i)).getkhoichieu().getngay() << endl;
        o << (*(danhsachphim + i)).getkhoichieu().getthang() << endl;
        o << (*(danhsachphim + i)).getkhoichieu().getnam() << endl;
        o << (*(danhsachphim + i)).getthoiluong() << endl;
        o << (*(danhsachphim + i)).getngonngu() << endl;
        o << (*(danhsachphim + i)).getgioithieuphim() << endl;
        o << (*(danhsachphim + i)).getage() << endl;
    }
    o.close();

}
void maychu::xoave(ve v)
{
    if (sove != 0)
    {
        ve* tmp = new ve[sove - 1];
        for (int i = 0; i < sove; i++)
        {
            if (*(danhsachve + i) == v)
            {
                for (int j = i + 1; j < sove; j++)
                {
                    *(tmp + i) = *(danhsachve + j);
                }
                break;
            }
            else
            {
                *(tmp + i) = *(danhsachve + i);
            }
        }
        delete[] danhsachve;
        danhsachve = new ve[sove - 1];
        for (int i = 0; i < sove - 1; i++)
        {
            *(danhsachve + i) = *(tmp + i);
        }
        delete[] tmp;
        sove -= 1;
    }
}
