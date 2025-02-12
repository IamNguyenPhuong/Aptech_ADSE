#include <stdio.h>

int main() {
  	for(int a=0;a<=10;a++){
  		for(int b=0;b<=10;b++){
  			for(int c=0;c<=10;c++){
  				for(int d=0;d<=10;d++){
  					if(a*d*d==b*c*c*c) printf("a = %d, b = %d, c = %d, d = %d\n",a,b,c,d);
				  }
			  }
		  }
	  }
   
}

