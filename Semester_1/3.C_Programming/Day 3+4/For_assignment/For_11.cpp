#include <stdio.h>

int main() {
   int a,b;
   printf("Nhap 2 canh cua hinh chu nhat");
   scanf("%d%d",&a,&b);
   for(int i=1;i<=a;i++){
   	for(int j=1;j<=b;j++){
   		if(i==1||j==1||i==a||j==b){
   			printf("*");
		   }
		else printf(" ");
	   }printf("\n");
   }
}

