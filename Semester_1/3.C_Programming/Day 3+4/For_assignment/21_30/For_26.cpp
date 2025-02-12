#include <stdio.h>

int main() {
   
   for(int a=0;a<=36;a++){
   	for(int b=0;b<=25;b++){
   		if((2*a+4*b==100)&&(a+b==36)){
   			printf("So ga la %d\n",a);
   			printf("So cho la %d\n",b);
		   }
	   }
   }
}

