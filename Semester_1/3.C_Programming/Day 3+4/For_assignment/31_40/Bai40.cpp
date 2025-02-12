#include <stdio.h>

int main() {
   
   int n;
   scanf("%d",&n);
   int max=0;
   while(n){
   	int k=n%10;
   	if(max<k) max=k;
   	n/=10;
   }
   printf("%d ",max);
   
}

