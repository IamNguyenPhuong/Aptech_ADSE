#include <stdio.h>

struct Mon {
	float toan;
	float van;
};

typedef struct SV {
	char ten[100];
	struct Mon mh;
} SINHVIEN;

main(){
	SINHVIEN sinhVien;
	printf("Nhap ten sv: ");
	gets(sinhVien.ten);
	printf("Nhap diem toan: ");
	scanf("%f", &sinhVien.mh.toan);
	printf("Nhap diem van: ");
	scanf("%f", &sinhVien.mh.van);
	SINHVIEN *p;
	p = &sinhVien;
	printf("Thong tin sv:\nTen: %s\nToan: %.2f\nVan: %.2f", 
				p->ten, p->mh.toan, p->mh.van);
//	struct SV sv[3];
//	for(int i=0; i<3; i++){
//		fflush(stdin);
//		printf("Nhap ten sv: ");
//		gets(sv[i].ten);
//		printf("Nhap diem toan: ");
//		scanf("%f", &sv[i].mh.toan);
//		printf("Nhap diem van: ");
//		scanf("%f", &sv[i].mh.van);
//	}
//	
//	printf("----------------\n");
//	for(int i=0; i<3; i++){
//		printf("Thong tin sv:\nTen: %s\nToan: %.2f\nVan: %.2f", 
//			sv[i].ten, sv[i].mh.toan, sv[i].mh.van);
//		printf("\n-----\n");
//	}
	
	
}
