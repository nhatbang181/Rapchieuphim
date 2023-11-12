#include "admin.h"
int main()
{   

	//admin admin0;
	//phim phim1;
	//admin0.settenphim("Dat Rung Phuong Nam", phim1);
	//admin0.setgiave(20000, phim1);
	//admin0.setdaodien("Tran THanh", phim1);
	//admin0.settheloai("Truyen hinh", phim1);
	//Time T1;
	//now n;
	//n.gancho(T1);
	//admin0.setkhoichieu(T1, phim1);
	//admin0.sethankhoichieu(phim1);
	//admin0.setthoiluong(20000, phim1);
	//admin0.setngonngu("Nhat Ban", phim1);
	//admin0.setgioithieuphim("Trinh Tham", phim1);
	//admin0.setage("10+", phim1);
	//phim phim2;
	//phim2 = phim1;
	//phim phim3;
	//admin0.settenphim("Onhicihit", phim3);
	//admin0.setgiave(20000, phim3);
	//admin0.setdaodien("Le Ngoc Chau", phim3);
	//admin0.settheloai("Tinh yeu, Han Thu", phim3);
	//admin0.setkhoichieu(T1, phim3);
	//admin0.sethankhoichieu(phim3);
	//admin0.setthoiluong(120, phim3);
	//admin0.setngonngu("Viet Nam", phim3);
	//admin0.setgioithieuphim("Yeu Nhau", phim3);
	//admin0.setage("10+", phim3);
	//Time T(20, 18, 24, 2, 2023);
	//admin0.setkhoichieu(T, phim3);
	//admin0.sethankhoichieu(phim3);
	//// cout << ve3;
	//// cout << maychu2.getphim("Dat Trung phuong nam");
	//admin admin2;
	//maychu maychu3;
	//suatchieu sc1;
	//suatchieu sc2;
	//sc2.setthoigianchieu(T);
	//sc1.setthoigianchieu(T1);
	//phim phim4;
	//admin0.settenphim("Ngon Lua Vinh Quang", phim4);
	//admin0.setgiave(30000, phim4);
	//admin0.setdaodien("Truong giang", phim4);
	//admin0.settheloai("Hanh Dong", phim4);
	//admin0.setkhoichieu(T1, phim4);
	//admin0.sethankhoichieu(phim4);
	//admin0.setthoiluong(120, phim4);
	//admin0.setngonngu("Han Quoc", phim4);
	//admin0.setgioithieuphim("Hanh Dong Chem nhau", phim4);
	//admin0.setage("10+", phim4);
	//Time T4(15, 12, 23, 1, 2023);
	//admin0.setkhoichieu(T4, phim4);
	//admin0.sethankhoichieu(phim4);

	//phim phim5;
	//admin0.settenphim("Boku No Pico", phim5);
	//admin0.setgiave(40000, phim5);
	//admin0.setdaodien("Asagawa Hirochi", phim5);
	//admin0.settheloai("Gay", phim5);
	//admin0.sethankhoichieu(phim5);
	//admin0.setthoiluong(120, phim5);
	//admin0.setngonngu("Nhat Ban", phim5);
	//admin0.setgioithieuphim("Phim noi ve an kem", phim5);
	//admin0.setage("10+", phim5);
	//admin0.setkhoichieu(T4, phim5);
	//admin0.sethankhoichieu(phim5);
	//phim phim6;
	//admin0.settenphim("Hero academy", phim6);
	//admin0.setgiave(43000, phim6);
	//admin0.setdaodien("John wick", phim6);
	//admin0.settheloai("Anh Hung", phim6);
	//admin0.sethankhoichieu(phim6);
	//admin0.setthoiluong(120, phim6);
	//admin0.setngonngu("Tieng Anh", phim6);
	//admin0.setgioithieuphim("Chem nhau kinh hoang", phim6);
	//admin0.setage("10+", phim6);
	//admin0.setkhoichieu(T4, phim6);
	//admin0.sethankhoichieu(phim6);
	//phim phim7;
	//admin0.settenphim("Human sec", phim7);
	//admin0.setgiave(43000, phim7);
	//admin0.setdaodien("Le Dinh Hieu", phim7);
	//admin0.settheloai("Kinh Di", phim7);
	//admin0.sethankhoichieu(phim7);
	//admin0.setthoiluong(120, phim7);
	//admin0.setngonngu("Han Quoc", phim7);
	//admin0.setgioithieuphim("Ret nguuoi rat hung du ", phim7);
	//admin0.setage("10+", phim7);
	//admin0.setkhoichieu(T4, phim7);
	//admin0.sethankhoichieu(phim7);
	//phim phim8;
	//admin0.settenphim("Devil sec", phim8);
	//admin0.setgiave(43000, phim8);
	//admin0.setdaodien("Thay Giao Ba", phim8);
	//admin0.settheloai("Kinh Di", phim8);
	//admin0.sethankhoichieu(phim8);
	//admin0.setthoiluong(120, phim8);
	//admin0.setngonngu("aa Ban", phim8);
	//admin0.setgioithieuphim("ac quy trong moi con nguoi", phim8);
	//admin0.setage("10+", phim8);
	//admin0.setkhoichieu(T4, phim8);
	//admin0.sethankhoichieu(phim8);
	//admin adminvip;
	//adminvip.nhaprap();
	//adminvip.themphim(phim4);
	//adminvip.themphim(phim1);
	//adminvip.themphim(phim3);
	//adminvip.themphim(phim5);
	//adminvip.themphim(phim6);
	//adminvip.themphim(phim7);
	//adminvip.themphim(phim8);
	//adminvip.quanlychieuphim();
	//adminvip.datve();






	fstream DanhSachPhim("DanhSachPhim.txt");
	admin admin1;
	//admin1.nhapphim("DanhSachPhim.txt");
	admin1.themphim("DanhSachPhim.txt");
	admin1.nhaprap();
	admin1.quanlychieuphim();
	admin1.xuatphim();
	admin1.nhapsuatchieu("DanhSachSuatChieu.txt");
	admin1.datve();
	// ban dau se cout ra 10 ngay chieu phim 
	// nhap ngay muon xem phim : nhập chắc ngày thôi 
	// nhap phim muon xem : Dat rung phuong nam , Devil sec
	// hien ra phim với suất chiếu trong ngày
	// nhap suat chieu : nhập 08:50 , 8 50 j cũng được mà phải có cách
	// chon cho ngoi : A1 , a1
	// chon bap : 1S2M3L , 1S2M , 1S , v.v
	// nuoc tuong tu
	// xong hien thi ra phong chieu 
	//  hien thi ra ve 

}