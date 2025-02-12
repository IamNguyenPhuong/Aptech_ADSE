#include <stdio.h>

int main() {
   
   int n;
   scanf("%d",&n);
   while(n){
   	int k=n%10;
   	printf("%d ",k);
   	n/=10;
   }

}

