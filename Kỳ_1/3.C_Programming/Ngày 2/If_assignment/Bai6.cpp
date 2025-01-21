#include <stdio.h>
#include <math.h>

int main() {
	int a,b,c;
	printf("Nhap vao 3 so a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0){
		if(b==0&&c==0) printf("Phuong trinh co vo so nghiem");
		else if(b==0&&c!=0) printf("Phuong trinh vo nghiem");
		else printf("Phuong trinh co 1 nghiem x=%f",(float)-c/b);
	}else{
		int d=b*b-4*a*c;
		if(d<0) printf("Phuong trinh vo nghiem");
		else if(d==0) printf("Phuong trinh co 1 nghiem duy nhat x=%f",(float)-b/(2*a));
		else{
		float x1 = (-b - sqrt(d)) / (2 * a);
		float x2 = (-b + sqrt(d)) / (2 * a);
			printf("Phuong trinh co 2 nghiem phan biet x1=%f  x2=%f",x1,x2);
		}
	}
}

