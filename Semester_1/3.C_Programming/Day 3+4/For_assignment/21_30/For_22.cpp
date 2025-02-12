#include <stdio.h>

int main() {
   int n;
   do{
   	printf("Enter a number 100<=n<=999 ");
    scanf("%d",&n);
   }while(n<100||n>999);
   int n1=n;
   int tong=0;
   int tich=1;
   int k;
   while(n){
   		k=n%10;
   		tong+=k;
   		tich*=k;
   		n/=10;	
   }
   if(tong==tich) printf("%d",n1);
   else printf("No");
}

