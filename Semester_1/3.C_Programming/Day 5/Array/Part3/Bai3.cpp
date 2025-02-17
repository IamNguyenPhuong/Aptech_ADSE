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
   int max=a[0][0];
   int min=a[0][0];
    for(int i=0;i<m;i++){
   	for(int j=0;j<n;j++){
   		if(max<a[i][j]) max=a[i][j];
   		if(min>a[i][j]) min=a[i][j];
	   }
   }
   printf("max la %d\n",max);
   printf("min la %d\n",min);
}

