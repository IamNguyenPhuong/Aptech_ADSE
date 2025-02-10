#include <stdio.h>

int main() {
	int n;
	printf("Nhap vao so luong phan tu trong mang ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap vao phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int b[n];
	for(int i=0;i<n;i++){
		b[n-1-i]=a[i];
	}
	printf("Cac gia tri lan luot cua mang dao nguoc la ");
	for(int i=0;i<n;i++){
		printf("%d ",b[i]);
	}
}

