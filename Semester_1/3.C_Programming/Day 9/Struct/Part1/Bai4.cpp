#include <stdio.h>
typedef struct Grade{
	char subject[50] ;
	float score;
} GD;
struct SinhVien{
	char name[50];
	int age;
	GD Khoi[3];
} ;
float TB(int a, int b, int c){
	float avg=(float)(a+b+c)/3;
	return avg;
}
int main() {
	struct SinhVien SV[3];
	for(int i=0;i<3;i++){
		fflush(stdin);
		printf("Moi nhap ten sinh vien thu %d: ",i+1);
		gets(SV[i].name);
		printf("Nhap tuoi: ");
		scanf("%d",&SV[i].age);
		for(int j=0;j<3;j++){
			fflush(stdin);
			printf("Moi nhap mon hoc thu %d: ",j+1);
			gets(SV[i].Khoi[j].subject);
			printf("Moi nhap diem: ");
			scanf("%f",&SV[i].Khoi[j].score);
		}
		
	}
	printf("----------THONG TIN SINH VIEN----------\n");
		for(int i=0;i<3;i++){
		printf("Ten sinh vien thu %d: %s\n",i+1,SV[i].name);
		printf("tuoi: %d\n",SV[i].age);
		for(int j=0;j<3;j++){
			printf("%s: ",SV[i].Khoi[j].subject);
			printf("%.2f\t",SV[i].Khoi[j].score);
		}printf("\n----------\n");
		
	}
	printf("\n*****Diem TB*****\n");
	for(int i=0;i<3;i++){
		float k=TB(SV[i].Khoi[0].score,SV[i].Khoi[1].score,SV[i].Khoi[2].score);
		printf("Ten sinh vien : %s--Diem TB 3 mon la %.2f\n",SV[i].name,k);
	}
	
	
}

