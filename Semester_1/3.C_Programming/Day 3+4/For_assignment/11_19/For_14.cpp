#include <stdio.h>

int main() {
   printf("Moi nhap PT ban muon tinh ket qua: VD 5x^4+3x^3+2x^2+10x+3 \n");
   printf("Xin moi nhap bac cua PT ");
   int n;
   scanf("%d",&n);
   printf("Xin moi nhap gia tri cua x ");
   int x;
   scanf("%d",&x);
   long long tong=0;
   int a=0;
   while(n!=0){
   	printf("Moi nhap he so a%d\n",n);
	scanf("%d",&a);
   	tong+=a;
	tong=tong*x;
   	n--;
   }
   printf("Moi nhap he so a0\n");
   scanf("%d",&a);
   tong+=a;
   printf("Gia tri cua bieu thuc la %lld",tong);
   
}

