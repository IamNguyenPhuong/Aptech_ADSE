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
   	int k=-1;
   	while(k<0||k>=n){
   		printf("Moi nhap vao so k ");
   		scanf("%d",&k);
	   }
	int b[n-1];
	for(int i=0;i<k;i++){
		b[i]=a[i];
	}
	for(int i=k;i<n-1;i++){
		b[i]=a[i+1];
	}
	printf("Chuoi ban dau la\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}printf("\n");
	printf("Chuoi bien doi la\n");
	for(int i=0;i<n-1;i++){
		printf("%d ",b[i]);
	}
}

