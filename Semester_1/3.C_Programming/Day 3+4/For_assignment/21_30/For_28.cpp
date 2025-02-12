#include <stdio.h>

int main() {
   int count=0;
   double n=0.1;
   while(n<10000){
   	n*=2;
   	count++;
   }
   printf("%d",count);
   
}

