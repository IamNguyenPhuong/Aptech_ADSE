#include <stdio.h>
#include <math.h>

int main() {
	int a,b,c;
	printf("Nhap vao 3 canh cua tam giac");
	scanf("%d%d%d",&a,&b,&c);
	if(a<=0||b<=0||c<=0){
		printf("Khong phai do dai");
		return 0;
	}
	if((a>=b+c)||(b>=a+c)||(c>=a+b)){
		printf("Khong phai tam giac");
		return 0;
	}
	float	p=(a+b+c)/2;
	double s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("The area of the triangle is %f",p);

}

