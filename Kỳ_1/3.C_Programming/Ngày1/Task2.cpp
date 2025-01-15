#include <stdio.h>
#include<math.h>
int main() {
	
//Bai1
//	float a,b,c;
//	scanf("%f%f%f",&a,&b,&c);
//	float ChuVi =a+b+c;
//	float s=ChuVi/2;
//	float DienTich=sqrt(s*(s-a)*(s-b)*(s-c));
//	printf("Chu vi la %f \n",ChuVi);
//	printf("Dien tich la %f ",DienTich);

//Bai2
//	printf("Nhap vao so nguyen :\n");
//	int SoNguyen;
//	scanf("%d",&SoNguyen);
//	int a=SoNguyen;
//	int Dem=0;
//	while(a!=0){
//		a=a/10;
//		Dem++;
//	}
//	printf("So Nguyen ban vua nhap co %d chu so\n ",Dem);
//	int k;
//	int count=1;
//	for(int i=Dem;i>=1;i--){
//		float c=pow(10,(i-1));
//		k=SoNguyen/c;
//		printf("So nguyen thu %d la %d \n",count,k);
//		SoNguyen=SoNguyen-c*k;
//		count++;
//	
//	}
//	//Bai3
//	printf("Nhap vao so nguyen :\n");
//	int SoNguyen;
//	scanf("%d",&SoNguyen);
//	int a=SoNguyen;
//	int Dem=0;
//	while(a!=0){
//		a=a/10;
//		Dem++;
//	}
//	printf("So Nguyen ban vua nhap co %d chu so\n ",Dem);
//	int k;
//	int count=1;
//	int Tong=0;
//	for(int i=Dem;i>=1;i--){
//		float c=pow(10,(i-1));
//		k=SoNguyen/c;
//		Tong=Tong+k;
//		printf("So nguyen thu %d la %d \n",count,k);
//		SoNguyen=SoNguyen-c*k;
//		count++;
//	
//	}
//	printf("Gia tri tong là %d",Tong);
//	
//Bai4
//	long long a;
//	scanf("%lld",&a);
//	int Gio=a/3600;
//	a=a-3600*Gio;
//	int Phut=a/60;
//	a=a-60*Phut;
//	printf("%d:%d:%d",Gio,Phut,a);

//Bai5
	printf("nhap vao 3 so a,b,c: ");
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	float delta=b*b-8*a*c;
	if(delta<0)
		printf("Phuong trinh vo nghiem");
	else if(delta==0){
		float x= -b/(2*2*a);
		printf("Phuong trinh co 1 nghiem duy nhat %f",x);
	}
	else{
		float x1=(-b-sqrt(delta)/(4*a));
		float x2=(-b+sqrt(delta)/(4*a));
		printf("Phuong trinh co 2 nghiem la x1=%f  x2=%f",x1,x2);
	}


}
	

