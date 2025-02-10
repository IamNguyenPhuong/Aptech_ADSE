//#include <stdio.h>
//
//int main() {
//   int n;
//   scanf("%d",&n);
//   for(int i=0;i<n;i++){
//   	for(int j=1;j<=2*n-1;j++){
//   		if(n-i<=j&&j<=n+i){
//   			printf("*");
//		   }
//		else printf(" ");
//	   }printf("\n");
//   }
//   
//}

#include <stdio.h>
int main(){
	int n=5;
	for(int i=1;i<=n;i++){
		for(int j=4;j>=i;j--){
			printf(" ");
		}
		for(int k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
		
	}
}
