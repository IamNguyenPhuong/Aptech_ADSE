#include <stdio.h>
#include <stdlib.h>
int tinhTong(int *a,int n){
	int tong=0;
	for(int i=0;i<n;i++){
		printf("nhap vao phan tu thu %d ",i);
		scanf("%d",a+i);
		tong+=*(a+i);	
	}
	return tong;
}
int main() {
	int n;
	scanf("%d",&n);
	int *a=(int *)calloc(n,sizeof(int));
	int k=tinhTong(a,n);
	printf("tong vua nhap la %d ",k);
	free(a); 
	
}

