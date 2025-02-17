#include <stdio.h>

int main() {
   int m,n;
   printf("nhap vao 2 chieu cua mang: ");
   scanf("%d%d",&m,&n);
   int a[m][n];
   for(int i=0;i<m;i++){
   	for(int j=0;j<n;j++){
   		printf("Nhap phan tu a[%d][%d]: ",i,j);
   		scanf("%d",&a[i][j]);
	   }
   }
   int tong=0;
    for(int i=0;i<m;i++){
   	for(int j=0;j<n;j++){
   		tong+=a[i][j];
	   }
   }
   printf("\ntong la %d",tong);
}

