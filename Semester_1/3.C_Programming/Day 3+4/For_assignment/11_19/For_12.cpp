#include <stdio.h>
#include <math.h>

int main() {
   int n;
   printf("Nhap 1 so bat ky");
   scanf("%d",&n);
   for(int i=2;i<=sqrt(n);i++){
   		if(n%i==0){
   			printf("Khong phai so nguyen to");
   			return 0;
		   }
	
   }
   printf("So nguyen to");
   
   
}

