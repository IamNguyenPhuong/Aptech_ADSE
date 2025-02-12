#include <stdio.h>

int main() {
   for(int i=100;i<=999;i++){
   		int i1=i;
   		int tong=0;
   		int tich=1;
   		int k;
   		while(i1){
   			k=i1%10;
   			tong+=k;
   			tich*=k;
   			i1/=10;
		   }
		if(tong==tich) printf("%d ",i);
   }
   
}

