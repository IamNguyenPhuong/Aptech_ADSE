#include <stdio.h>
int giaithua(int n){
	int tich=1;
	for(int i=1;i<=n;i++){
		tich*=i;
	}
	return tich;
}
int main() {
   int n,k;
   printf("Nhap vao k ");
   scanf("%d",&k);
   printf("Nhap vao n ");
   scanf("%d",&n);
   long long C=giaithua(n)/(giaithua(n-k)*giaithua(k));
   printf("%lld",C);
   
   
}

