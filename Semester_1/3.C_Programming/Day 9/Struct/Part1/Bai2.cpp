#include <stdio.h>
struct SinhVien{
	char ten[50];
	int age;
	float avg;
};
int main() {
	int n;
	printf("Moi nhap so luong sinh vien: ");
	scanf("%d",&n);
	struct SinhVien SV[n];
	for(int i=0;i<n;i++){
		fflush(stdin);
		printf("Moi nhap ten sinh vien thu %d: ",i+1);
		gets(SV[i].ten);
		printf("Nhap tuoi: ");
		scanf("%d",&SV[i].age);
		printf("Nhap diem TB: ");
		scanf("%f",&SV[i].avg);
	}
	printf("\n---------Thong tin sinh vien---------\n");
	
	
	for(int i=0;i<n;i++){
		printf("Ten\t:%s\n",SV[i].ten);
		printf("Tuoi\t:%d\n",SV[i].age);
		printf("Diem TB\t:%f\n",SV[i].avg);
		printf("-----------\n");
	}

}

