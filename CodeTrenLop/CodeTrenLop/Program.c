// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
void demoString()
{
	// string
	char name[50] = { 'A', 'n', 'h' };
	// gets(name); > fgets();      khong dung duoc khoang trang
	//for (int i = 0; i < 10; i++)
	//{
	//	scanf_s(" %c", &name[i]);
	//}
	while (getchar() != '\n');
	printf("Nhap ten cua ban: ");
	fgets(name, sizeof(name), stdin); //nhap duoc khoang trang
	// xuat du lieu = for + printf
	printf(" %s", name);
	printf("\n");
	//puts(name) thay the cho ca mang for bao gom ca dau xuong dong
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
int main()
{
	demoString();
	return;
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