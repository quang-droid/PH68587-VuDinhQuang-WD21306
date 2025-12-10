// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
#include <string.h>

void demoString()
{
	// string
	char mangKyTu[50] = { 'A', 'n', 'h' };
	// gets(name); > fgets();      khong dung duoc khoang trang
	//for (int i = 0; i < 10; i++)
	//{
	//	scanf_s(" %c", &name[i]);
	//}
	while (getchar() != '\n');
	printf("Nhap ten cua ban: ");
	fgets(mangKyTu, sizeof(mangKyTu), stdin); //nhap duoc khoang trang
	// xuat du lieu = for + printf
	//printf(" %s", name);
	//printf("\n");
	//puts(name) thay the cho ca mang for bao gom ca dau xuong dong
	// puts(mangKyTu);
	printf("String Length: ");
	printf("%d", strlen(mangKyTu) - 1);
	printf("\n");
	printf("String Compare The Same As: ");
	printf("%d", strcmp("aBc", "aBc"));
	printf("\n");
	printf("String Compare Less Than: ");
	printf("%d", strcmp ("aBc", "aBcD"));
	printf("String Compare Greater than: ");
	printf("%d", strcmp("C", "A"));
	printf("\n");
	printf("String Lower: ");
	printf("%s", strlwr(mangKyTu));
	printf("\n");
	printf("String Upper: ");
	printf("%s", strupr(mangKyTu));
	printf("\n");
	printf("String Reverse (Encryption): ");
	printf("%s", strrev(mangKyTu));
	printf("\n");
	printf("String Reverse (Decryption): ");
	printf("%s", strrev(mangKyTu));
	printf("\n");
	printf("Find String in String: ");
	if (strstr(mangKyTu, "A") != NULL)
	{
		printf("Found: ");
		printf("%s", strstr(mangKyTu, "A"));
	}
	else
	{
		printf("NOT FOUND");
	}
}
void cacSoChiaHetCho3()
{
	int n;
	int tong = 0;
	//
	scanf_s("%d", &n);
	int j = 0;
	for (int i =0; i <= n; i++)
	{
		if (i % 3 == 0)
		{
			tong += i;
			j++;
			//printf("%d, ", i);
		}
	}
	printf("TBC: %d\n", tong / j );
}
void nhapThongTinSv()
{
	char ten[50];
	int soLuong;  

}
void demoMang2Chieu()
{
	int array[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("mang[%d][%d] = ", i, j);
			scanf_s("%d", &array[i][j]);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d, ", array[i][j]);
		}
		printf("\n");
	}
}
//              BAI THI THU 


struct monHoc
{
	char tenMonHoc[50];
	int maMonHoc;
	int soTinChi;
};
struct thongTinSv 
{
	char hoTen[50];
	float diemLab;
};
void thongTinMonHoc()
{
	struct monHoc mh[4];
	int hocPhiTinChi = 500000;
	int hocPhiMonHoc;
	for (int i = 0; i < 4; i++)
	{
		while (getchar() != '\n');
		printf("Nhap ten mon hoc: ");
		fgets(mh[i].tenMonHoc, sizeof(mh[i].tenMonHoc), stdin);
		printf("Nhap ma mon hoc: ");
		scanf_s("%d", &mh[i].maMonHoc);
		printf("Nhap so tin chi: ");
		scanf_s("%d", &mh[i].soTinChi);
	}
	for (int i = 0; i < 4; i++)
	{
		printf("-------------------------------\n");
		printf("Ten mon hoc: %s", mh[i].tenMonHoc);
		printf("Ma mon hoc: %d\n", mh[i].maMonHoc);
		printf("So tin chi: %d\n", mh[i].soTinChi);
		printf("Hoc phi mon hoc: %d\n", mh[i].soTinChi * hocPhiTinChi);
	}
}
void tinhTongSoLe()
{
	int n;
	int tong = 0;
	printf("Nhap n: ");
	scanf_s("%d", &n);
	if (n % 2 == 0)
	{
		printf("%d la so chan\n", n);
	}
	else
	{
		printf("%d la so le\n", n);
	}
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			tong += i;
			printf("%d, ", i);
		}
	}
	printf("Tong cac so le tu 0 den %d la: %d\n", n, tong);
}
void thongTinDiemLAB()
{
	struct thongTinSv sv[3];
	for (int i = 0; i < 3; i++)
	{
		while (getchar() != '\n');
		printf("Moi nhap ten sinh vien: ");
		fgets(sv[i].hoTen, sizeof(sv[i].hoTen), stdin);
		printf("Nhap so diem: ");
		scanf_s("%d", sv[i].diemLab);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("---------------------------");
		printf("%s\n", sv[i].hoTen);
		printf("%d\n", sv[i].diemLab);
	}

}
int hamVongLap(int n)
{
	int luaChon = 1;
	while (luaChon == 1)
	{
		printf("--------------------------------------------------\n");
		switch (n)
		{
		case 1:
			thongTinMonHoc();
			break;
		case 2:
			tinhTongSoLe();
			break;
		case 3:
			thongTinDiemLAB();
			break;
		}
		printf("Ban co muon tiep tuc khong (1: Co / 0: Khong): ");
		scanf_s("%d", &luaChon);
	}
	printf("-------------------------------------------\n");
}
int main()
{
	int n;
	do
	{
		printf("In Menu\n");
		puts("0. Thoat");
		puts("1.Thong tin mon hoc");
		puts("2.Tinh tong so le");
		puts("3.Thong tin diem LAB");
		printf("Moi nhap lua chon: ");
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