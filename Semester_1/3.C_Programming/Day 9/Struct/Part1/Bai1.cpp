#include <stdio.h>
struct SinhVien{
	char ten[50];
	int age;
	float avg;
};
int main() {
	struct SinhVien SV;
	printf("Moi nhap ten sinh vien: ");
	gets(SV.ten);
	// Neu dung fgets phai xu ly \n
	printf("Nhap tuoi: ");
	scanf("%d",&SV.age);
	printf("Nhap diem TB: ");
	scanf("%f",&SV.avg);
	printf("\n---------Thong tin sinh vien---------\n");
	printf("Ten\t:%s\n",SV.ten);
	printf("Tuoi\t:%d\n",SV.age);
	printf("Diem TB\t:%f\n",SV.avg);
}

