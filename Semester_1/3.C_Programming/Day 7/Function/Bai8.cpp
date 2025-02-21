#include <stdio.h>
#include<stdlib.h>
int isPrime(int n){
	if(n<=1) return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}	return 1;
}
void check(int *a,int n){
		int count=0;
		for(int i=0;i<n;i++){
		printf("Nhap vao phan tu thu %d ",i);
		scanf("%d",a+i);
		if(isPrime(a[i])) count++;	
	}
	printf("Tong so nguyen to la %d",count); 
}
int main() {
	int n;

	printf("Nhap vao so luong phan tu trong mang ");
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	check(a,n);

	
}

