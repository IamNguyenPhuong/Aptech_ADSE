#include <stdio.h>

int main() {
	int n;
	printf("Nhap vao so luong phan tu trong mang ");
	scanf("%d",&n);
	int a[n];
	int tong=0;
	for(int i=0;i<n;i++){
		printf("Nhap vao phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	for(int i=1;i<n;i++){
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
	}
	printf("max la %d \n",max);
	printf("min la %d \n",min);
	int max2=min;
	for(int i=1;i<n;i++){
		if(max2<a[i]&&a[i]!=max) max2=a[i];
		
	}
	printf("max2 la %d \n",max2);
}

