#include <stdio.h>

int main() {
   for(int b=1;b<1000;b++){
   	for(int a=1;a<b;a++){
   		float k=(a*a+b*b+1)/(a*b);
   		if((a*a+b*b+1)==(a*b*k)) printf("%d %d\n",a,b);
   		
	   }
   }
   
}

