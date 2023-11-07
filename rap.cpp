#include "rap.h"
rap::rap()
{
    tenrap = "A";
    diachi = "A";

}
rap::~rap() {

}

string rap::gettenrap() { return tenrap; }
string rap::getdiachi() { return diachi; }
phong rap::getphong(int i, int j) { return danhsachphong[i][j]; }
maychu rap::getmaychu() { return maychurap; }
Time rap::getngaychieuphim() { return ngaychieuphim; }
void rap::datlaiphim() {
    now n;
    Time homnay;
    n.gancho(homnay);
    int count = 0;
    Time max;
    max = homnay;
    for (int i = 0; i < 10; i++) {
        if (homnay > danhsachphong[i][0].suat[0].getthoigianchieu()) {
            count++;
        }
        if (danhsachphong[i][0].suat[0].getthoigianchieu() > max) {
            max = danhsachphong[i][0].suat[0].getthoigianchieu();
        }

    }
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 8; k++) {
                danhsachphong[i][j].suat[k].getthoigianchieu().congngay(max, (i + 1));
            }
        }
    }
}