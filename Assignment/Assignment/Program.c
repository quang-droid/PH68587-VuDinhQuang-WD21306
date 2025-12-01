// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.
#include <stdio.h>
#include <math.h>

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
			if ((int)soCanKiemTra % i == 0)
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
	double gioBatDau, gioKetThuc, soGioThue, tienThanhToan;
	printf("Nhap gio bat dau: ");
	scanf_s("%lf", &gioBatDau);
	printf("Nhap gio ket thuc: ");
	scanf_s("%lf", &gioKetThuc);
	soGioThue = gioKetThuc - gioBatDau;
}
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
	double soTienCanDoi;

}
void tinhLaiSuatVayNganHang()
{

}
void vayTienMuaXeTraGop()
{

}
void sapXepThongTinSinhVien()
{

}
void gameFpolyLott()
{

}
void tinhToanPhanSo()
{

}
int hamVongLap(int n)
{
	int luaChon = 1;
	while (luaChon == 1)
	{
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
		printf("----------------------------------------------------\n");
	}
}
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