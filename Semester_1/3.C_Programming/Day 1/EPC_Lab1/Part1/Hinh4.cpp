#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
   	for(int j=1;j<=2*n-1;j++){
   		if(n-i<=j && j<=n+i&& (i+j)%2==1){
   			printf("*");
		   }
		else printf(" ");
	   }
	   printf("\n");
   }
   for(int i=n-1;i>=0;i--){
   	for(int j=1;j<=2*n-1;j++){
   		if(n-i<=j && j<=n+i&& (i+j)%2==1){
   			printf("*");
		   }
		else printf(" ");
	   }
	   printf("\n");
   }
}

