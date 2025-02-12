#include <stdio.h>

int main() {
   for(int x=0;x<=20;x++){
   	for(int y=0;y<=33;y++){
   		for(int z=0;z<=100;z+=3){
   			if((x+y+z==100)&&(5*x+3*y+z/3==100)){
   				printf("%d %d %d\n",x,y,z);
			   }
		   }
	   }
   }
   
}

