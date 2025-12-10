// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.
#include <stdio.h>
#include <math.h>
struct SinhVien 
{
	char ten[50];
	float diem;
	char hocLuc[20];
};
void kiemTraSoNguyen()
{
	double soCanKiemTra;
	int soNguyen;
	printf("Nhap so can kiem tra: ");
	scanf_s("%lf", &soCanKiemTra);
	soNguyen = (int)soCanKiemTra;
	if (soCanKiemTra == soNguyen)
	{
		printf("%.2f la so nguyen.\n", soCanKiemTra);
		for (int i = sqrt((int)soCanKiemTra); i <= sqrt((int)soCanKiemTra); i++)
		{
			if ((int)soCanKiemTra % i == 0 && i != 1)
			{
				printf("%.2f khong phai la so nguyen to.\n ", soCanKiemTra); 
			}
			else if (soCanKiemTra <= 1)
			{
			  printf("%.2f khong phai la so nguyen to.\n ", soCanKiemTra);
			}
			else { printf("%.2f la so nguyen to.\n ", soCanKiemTra); }
			if (sqrt((int)soCanKiemTra) == (int)sqrt((int)soCanKiemTra))
			{
			  printf("%.2f la so chinh phuong.\n ", soCanKiemTra);
			}
			else { printf("%.2f khong phai la so chinh phuong.\n ", soCanKiemTra); }
		}
	}
	else
	{
		printf("%.2f khong phai la so nguyen.\n", soCanKiemTra);
		printf("%.2f khong phai la so nguyen to.\n ", soCanKiemTra);
		printf("%.2f khong phai la so chinh phuong.\n ", soCanKiemTra);
	}
}
//Done
void uocChungvaBoiChung()
{
	int a, b, uocSoChung, boiSoChung;
	printf("Nhap so thu nhat: ");
	scanf_s("%d", &a);
	printf("Nhap so thu hai: ");
	scanf_s("%d", &b);
	if (a > 0 && b > 0)
	{
		if (b > a)
		{
			int temp = b;
			b = a;
			a = temp;
		}// a luon lon hon b

		for (int i = 1; i <= b; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				uocSoChung = i;
			}
		}
		boiSoChung = (a * b) / uocSoChung;
		printf("Uoc so chung lon nhat la: %d\n", uocSoChung);
		printf("Boi so chung nho nhat la: %d\n", boiSoChung);
	}
	else
	{
		printf("So khong hop le, hay nhap so nguyen duong!\n");
	}
}
//Done
void tinhTienQuanKaraoke()
{
	int gioBatDau, gioKetThuc, soGioThue;
	double tienThanhToan;
	printf("Quan Karaoke mo cua tu 12 gio den 23 gio .\n");
	printf("Nhap gio bat dau: ");
	scanf_s("%d", &gioBatDau);
	printf("Nhap gio ket thuc: ");
	scanf_s("%d", &gioKetThuc);
	if (gioBatDau < 12 || gioKetThuc > 23 || gioBatDau >= gioKetThuc)
	{
		printf("Gio khong hop le!\n");
	}
	else
	{
		soGioThue = gioKetThuc - gioBatDau;
		if (soGioThue <= 3)
		{
			tienThanhToan = soGioThue * 50000;
		}
		else
		{
			tienThanhToan = 3 * 50000 + (soGioThue - 3) * 50000 * 0.7;
		}
		if (gioBatDau >= 14 && gioKetThuc <= 17)
		{
			tienThanhToan = tienThanhToan * 0.9;
		}
		printf("So tien phai thanh toan la: %.2f VND\n", tienThanhToan);
	}
}
//Done
void tinhTienDien()
{
	double soDienTieuThu, tienDien;
	int array[6] = { 1678, 1734, 2014, 2536, 2834, 2927 };
	printf("Nhap so dien tieu thu(kWh): ");
	scanf_s("%lf", &soDienTieuThu);
	if (soDienTieuThu >= 0)
	{
		if (soDienTieuThu <= 50)
		{
			tienDien = soDienTieuThu * array[0];
		}
		else if (soDienTieuThu <= 100)
		{
			tienDien = 50 * array[0] + (soDienTieuThu - 50) * array[1];
		}
		else if (soDienTieuThu <= 200)
		{
			tienDien = 50 * array[0] + 50 * array[1] + (soDienTieuThu - 100) * array[2];
		}
		else if (soDienTieuThu <= 300)
		{
			tienDien = 50 * array[0] + 50 * array[1] + 100 * array[2] + (soDienTieuThu - 200) * array[3];
		}
		else if (soDienTieuThu <= 400)
		{
			tienDien = 50 * array[0] + 50 * array[1] + 100 * array[2] + 100 * array[3] + (soDienTieuThu - 300) * array[4];
		}
		else
		{
			tienDien = 50 * array[0] + 50 * array[1] + 100 * array[2] + 100 * array[3] + 100 * array[4] + (soDienTieuThu - 400) * array[5];
		}
		printf("So tien dien phai tra: %.2f VND\n", tienDien);
	}
	else
	{
		printf("So dien tieu thu khong hop le!\n");
	}
}
//Done
void doiTien()
{
	int soTienCanDoi;
	int a[9] = { 500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000 };
	printf("Nhap so tien can doi (VND): ");
	scanf_s("%d", &soTienCanDoi);
	if (soTienCanDoi > 0)
	{
		for (int i = 0; i < 9; i++)
		{
			if (soTienCanDoi >= a[i])
			{
				int soTo = soTienCanDoi / a[i];
				soTienCanDoi = soTienCanDoi - soTo * a[i];
				printf("so to %d VND: %d to\n", a[i], soTo);
			}
		}
	}
	else
	{
		printf("So tien khong hop le!\n");
	}
}
//Done
void tinhLaiSuatVayNganHang()
{
	double lai1Thang = 0.05;
	int soTienVay;
	int a[12];
	int noGoc;
	printf("Nhap so tien vay (VND): ");
	scanf_s("%d", &soTienVay);
	noGoc = soTienVay / 12;
	if (soTienVay > 0)
	{
		for (int i = 0; i < 12; i++)
		{
			a[i] = noGoc + (soTienVay - noGoc * i) * lai1Thang;
			printf("Thang %d: So tien phai tra la: %d VND\n", i + 1, a[i]);
		}
	}
	else
	{
		printf("So tien khong hop le!\n");
	}
}
//Done
void vayTienMuaXeTraGop()
{
	double soPhanTramVay;
	double thoiHanVay;
	double laiSuatCoDinhNam = 0.072;
	double tienDuocVayCoDinh;
	printf("Nhap so tien muon vay (Toi da 500trieu) (VND): ");
	scanf_s("%lf", &tienDuocVayCoDinh);
	if (tienDuocVayCoDinh > 0 && tienDuocVayCoDinh <= 500000000)
	{
		printf("Nhap so phan tram tra truoc: ");
		scanf_s("%lf", &soPhanTramVay);
		if (soPhanTramVay > 0 && soPhanTramVay <= 100)
		{
			printf("Nhap thoi han vay (thang): ");
			scanf("%lf", &thoiHanVay);

			double tienTraLanDau = tienDuocVayCoDinh * (soPhanTramVay / 100);
			double soTienVay = tienDuocVayCoDinh - tienTraLanDau;
			double laiThang = laiSuatCoDinhNam / 12;
			double tienTraHangThang = soTienVay * laiThang * pow(1 + laiThang, thoiHanVay) / (pow(1 + laiThang, thoiHanVay) - 1);
			printf("So tien duoc vay la: %.2lf VND\n", tienDuocVayCoDinh);
			printf("So tien phai tra lan dau la: %.2lf VND\n", tienTraLanDau);
			printf("So tien phai tra hang thang la: %.2lf VND\n", tienTraHangThang);
		}
		else
		{
			printf("So phan tram vay khong hop le!\n");
		}
	}
	else
	{
		printf("So tien khong hop le!\n");
	}
}
//Done
void sapXepThongTinSinhVien()
{
		printf(" Thuc thi sap xep sinh vien  \n");
		int n;
		struct SinhVien sv[100];
		do
		{
			printf("Nhap so luong sinh vien (1-100): ");
	    	scanf_s("%d", &n);
			if (n < 1 || n > 100)
			printf("So luong khong hop le. Moi nhap lai.\n");
		} while (n < 1 || n > 100);

		getchar();
		for (int i = 0; i < n; i++) 
		{
			printf("\nNhap thong tin sinh vien thu %d\n", i + 1);
			printf("Ho ten: ");
			fgets(sv[i].ten, sizeof(sv[i].ten), stdin);
			sv[i].ten[strcspn(sv[i].ten, "\n")] = '\0';
			printf("Diem: ");
			scanf_s("%f", &sv[i].diem);
			getchar();
			if (sv[i].diem >= 9.0)
				strcpy_s(sv[i].hocLuc, sizeof(sv[i].hocLuc), "Xuat sac");
			else if (sv[i].diem >= 8.0)
				strcpy_s(sv[i].hocLuc, sizeof(sv[i].hocLuc), "Gioi");
			else if (sv[i].diem >= 6.5)
				strcpy_s(sv[i].hocLuc, sizeof(sv[i].hocLuc), "Kha");
			else if (sv[i].diem >= 5.0)
				strcpy_s(sv[i].hocLuc, sizeof(sv[i].hocLuc), "Trung binh");
			else
				strcpy_s(sv[i].hocLuc, sizeof(sv[i].hocLuc), "Yeu");
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (sv[i].diem < sv[j].diem) 
				{
					struct SinhVien tmp = sv[i];
						sv[i] = sv[j];
						sv[j] = tmp;
				}
			}
		}
		printf("\n===== DANH SACH SINH VIEN SAU KHI SAP XEP =====\n");
		printf("%-25s %-10s %-15s\n", "Ho ten", "Diem", "Hoc luc");
		for (int i = 0; i < n; i++) 
		{
			printf("%-25s %-10.2f %-15s\n", sv[i].ten, sv[i].diem, sv[i].hocLuc);
		}
}
//Done
void gameFpolyLott()
{
	int nhap1, nhap2;
	int trung1, trung2;
	int trungGiai = -1;
	printf("Moi nhap so thu nhat ( 1 den 15 ): ");
	scanf_s("%d", &nhap1);
	printf("Moi nhap so thu hai ( 1 den 15 ): ");
	scanf_s("%d", &nhap2);
	trung1 = (rand() % 15) + 1;
	trung2 = (rand() % 15) + 1;
	printf("Ket qua so may man la %d va %d\n", trung1, trung2);
	if (nhap1 == trung1 || nhap1 == trung2)
	{
		trungGiai++;
	}
	if (nhap2 == trung1 || nhap2 == trung2);
	{
		trungGiai++;
	}
	if (trungGiai == 0)
	{
		printf("Chuc ban may man lan sau\n");
	}
	else if (trungGiai == 1)
	{
		printf("Chuc mung ban da trung gai Nhi\n");
	}
	else if (trungGiai == 2)
	{
		printf("Chuc mung ban da trung giai Nhat\n");
	}
	else
	{
		printf("Chuc mung ban da trung giai Nhat\n");
	}
}
//Done
void tinhToanPhanSo()
{
	int tu1, mau1, tu2, mau2;
	printf("Nhap tu so phan so 1: ");
	scanf_s("%d", &tu1);
	printf("Nhap mau so phan so 1: ");
	scanf_s("%d", &mau1);
	printf("Nhap tu so phan so 2: ");
	scanf_s("%d", &tu2);
	printf("Nhap mau so phan so 2: ");
	scanf_s("%d", &mau2);
	if (mau1 != 0 && mau2 != 0)
	{
		printf("Phan so 1 la: %d/%d\n", tu1, mau1);
		printf("Phan so 2 la: %d/%d\n", tu2, mau2);
		// tinh tong phan so
		int tuTong = tu1 * mau2 + tu2 * mau1;
		int mauTong = mau1 * mau2;
		printf("Tong hai phan so la: %d/%d\n", tuTong, mauTong);
		// tinh hieu phan so
		int tuHieu = tu1 * mau2 - tu2 * mau1;
	    int mauHieu = mauTong;
		printf("Hieu hai phan so la: %d/%d\n", tuHieu, mauHieu);
		// tinh tich phan so
		int tuTich = tu1 * tu2;
		int mauTich = mau1 * mau2;
		printf("Tich hai phan so la: %d/%d\n", tuTich, mauTich);
		// tinh thuong phan so
		int tuThuong = tu1 * mau2;
		int mauThuong = mau1 * tu2;
		printf("Thuong hai phan so la: %d/%d\n", tuThuong, mauThuong);
	}
	else
	{
		printf("Phan so khong hop le ( mau so phai khac 0 )!\n");
	}
}
//Done
int hamVongLap(int n)
{
	int luaChon = 1;
	while (luaChon == 1)
	{
		printf("----------------------------------------------------\n");
		switch (n)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			uocChungvaBoiChung();
			break;
		case 3:
			tinhTienQuanKaraoke();
			break;
		case 4:
			tinhTienDien();
			break;
		case 5:
			doiTien();
			break;
		case 6:
			tinhLaiSuatVayNganHang();
			break;
		case 7:
			vayTienMuaXeTraGop();
			break;
		case 8:
			sapXepThongTinSinhVien();
			break;
		case 9:
			gameFpolyLott();
			break;
		case 10:
			tinhToanPhanSo();
			break;
		}
		printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
		scanf_s("%d", &luaChon);
	}
	printf("----------------------------------------------------\n");
}
//Done
int main()
{
	int n;
	do
	{
		printf("In Menu\n");
		printf("0. Thoat\n");
		printf("1. Kiem tra so nguyen\n");
		printf("2. Tim Uoc so chung va Boi so chung cua 2 so\n");
		printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
		printf("4. Tinh tien dien\n");
		printf("5. Chuc nang doi tien\n");
		printf("6. Tinh lai suat vay ngan hang vay tra gop\n");
		printf("7. Vay tien mua xe tra gop\n");
		printf("8. Sap xep thong tin sinh vien\n");
		printf("9. Game FPOLY-LOTT\n");
		printf("10. Tinh toan phan so\n");
		printf("Moi chon CN [0-10]: ");
		scanf_s("%d", &n);
		hamVongLap(n);
	} while (n != 0);
}
//Done

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184