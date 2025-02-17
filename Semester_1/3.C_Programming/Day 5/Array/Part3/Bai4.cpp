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
    for(int i=0;i<m;i++){
   	for(int j=0;j<n;j++){
   			printf("%d ",a[i][j]);
	   }printf("\n");
   }
   int hang=0,cot=0;

    for(int i=0;i<n;i++){
    	int tong=0;
   		for(int j=0;j<m;j++){
   		tong+=a[i][j];
   }
    printf("hang %d co tong la %d\n",i,tong);
	}
	
	for(int j=0;j<m;j++){
		int tong2=0;
		for(int i=0;i<n;i++){
		tong2+=a[i][j];
	}
   printf("cot %d co tong la %d\n",j,tong2);
	}
}

