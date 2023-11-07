#include "maychu.h"
maychu::maychu()
{
    danhsachve = NULL;
    danhsachphim = NULL;
    sove = 0;
    sophim = 0;
    doanhsohangthang = 0;
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
    for (int i = (v.getbap()).length() - 1; i >= 0; i--)
    {
        int* tmpso = new int;
        (*tmpso) = 0;
        if ((v.getbap())[i] == 'L')
        {
            int* tmp1 = new int;
            (*tmp1) = i - 1;
            int* nhan = new int;
            *nhan = 1;
            while (((*tmp1) >= 0) && (((int)(v.getbap())[*tmp1]) <= 57 && ((int)(v.getbap())[*tmp1]) >= 48))
            {
                (*tmpso) += (((int)(v.getbap())[*tmp1]) - 48) * (*nhan);
                (*nhan) *= 10;
                (*tmp1)--;
            }
            doanhsohangthang += 40 * (*tmpso);
            delete nhan, tmp1;
        }
        else if ((v.getbap())[i] == 'M')
        {
            int* tmp1 = new int;
            (*tmp1) = i - 1;
            int* nhan = new int;
            *nhan = 1;
            while (((*tmp1) >= 0) && ((int)(v.getbap())[*tmp1]) <= 57 && ((int)(v.getbap())[*tmp1]) >= 48)
            {
                (*tmpso) += (((int)(v.getbap())[*tmp1]) - 48) * (*nhan);
                (*nhan) *= 10;
                (*tmp1)--;
            }
            doanhsohangthang += 30 * (*tmpso);
            delete nhan, tmp1;
        }
        else if ((v.getbap())[i] == 'S')
        {
            int* tmp1 = new int;
            (*tmp1) = i - 1;
            int* nhan = new int;
            *nhan = 1;
            while (((*tmp1) >= 0) && (((int)(v.getbap())[*tmp1]) <= 57 && ((int)(v.getbap())[*tmp1]) >= 48))
            {
                (*tmpso) += (((int)(v.getbap())[*tmp1]) - 48) * (*nhan);
                (*nhan) *= 10;
                (*tmp1)--;
            }
            doanhsohangthang += 20 * (*tmpso);
            delete nhan, tmp1;
        }
        delete tmpso;
    }
    for (int i = (v.getnuoc()).length() - 1; i >= 0; i--)
    {
        int* tmpso = new int;
        (*tmpso) = 0;
        if ((v.getnuoc())[i] == 'L')
        {
            int* tmp1 = new int;
            (*tmp1) = i - 1;
            int* nhan = new int;
            *nhan = 1;
            while (((*tmp1) >= 0) && (((int)(v.getbap())[*tmp1]) <= 57 && ((int)(v.getbap())[*tmp1]) >= 48))
            {
                (*tmpso) += (((int)(v.getnuoc())[*tmp1]) - 48) * (*nhan);
                (*nhan) *= 10;
                (*tmp1)--;
            }
            doanhsohangthang += 25 * (*tmpso);
            delete nhan, tmp1;
        }
        else if ((v.getnuoc())[i] == 'M')
        {
            int* tmp1 = new int;
            (*tmp1) = i - 1;
            int* nhan = new int;
            *nhan = 1;
            while (((*tmp1) >= 0) && (((int)(v.getbap())[*tmp1]) <= 57 && ((int)(v.getbap())[*tmp1]) >= 48))
            {
                (*tmpso) += (((int)(v.getnuoc())[*tmp1]) - 48) * (*nhan);
                (*nhan) *= 10;
                (*tmp1)--;
            }
            doanhsohangthang += 20 * (*tmpso);
            delete nhan, tmp1;
        }
        else if ((v.getnuoc())[i] == 'S')
        {
            int* tmp1 = new int;
            (*tmp1) = i - 1;
            int* nhan = new int;
            *nhan = 1;
            while (((*tmp1) >= 0) && (((int)(v.getbap())[*tmp1]) <= 57 && ((int)(v.getbap())[*tmp1]) >= 48))
            {
                (*tmpso) += (((int)(v.getnuoc())[*tmp1]) - 48) * (*nhan);
                (*nhan) *= 15;
                (*tmp1)--;
            }
            doanhsohangthang += 20 * (*tmpso);
            delete nhan, tmp1;
        }
        delete tmpso;
    }
}
int maychu::getdoanhsohangthang() { return doanhsohangthang; }

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
