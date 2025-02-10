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
	printf("Cac gia tri so chan trong mang la\n");
	for(int i=0;i<n;i++){
		if(a[i]%2==0) printf("%d ",a[i]);
	}
	printf("\nCac gia tri so le trong mang la\n");
	for(int i=0;i<n;i++){
		if(a[i]%2==1) printf("%d ",a[i]);
	}
	
}

