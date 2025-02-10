#include <stdio.h>

int main() {
	int a;
	printf("nhap vao so nguyen n");
	scanf("%d",&a);
	long long b;
	b=a*a*(a+1)*(a+1)/4;
	printf("Tong các lap phuong la %lld",b);
}

