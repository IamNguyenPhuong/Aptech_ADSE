#include <stdio.h>

int main() {
	int n;
	printf("Nhap vao so luong phan tu trong mang ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap vao phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

