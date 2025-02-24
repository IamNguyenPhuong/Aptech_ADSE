#include <stdio.h>
#include<stdlib.h>
int main() {
	int n;
	printf("Nhap vao so luong phan tu trong mang: ");
	scanf("%d",&n);	
   int *a=(int *)calloc(n,sizeof(int));
   for(int i=0;i<n;i++){
   		printf("Nhap vao phan tu thu %d: ",i);
   		scanf("%d",a+i);
   	
   }
   for(int i=0;i<n;i++){
	printf("%d ",*(a+i));
   }
	int k;
	do{
		printf("\nNhap vao vi tri ban muon xoa %d->%d: ",0,n-1);
		scanf("%d",&k);
	}while(k<0||k>n-1);

	for(int i=k;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
	a=(int *)realloc(a,sizeof(int)*(n));
	for(int i=0;i<n;i++){
	printf("%d ",*(a+i));
   }
   free(a);
}

