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
	int x;
	printf("Nhap vao gia tri x ");
	scanf("%d",&x);
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==x) dem++;
	}
	printf("So lan xuat hien gia tri %d la %d ",x,dem);
}

