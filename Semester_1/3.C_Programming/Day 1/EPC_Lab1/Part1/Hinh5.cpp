#include <stdio.h>
int main(){
	int n=5;
	for(int i=1;i<=n;i++){
		for(int j=5;j>=i;j--){
			printf("* ");
		}
		for(int k=1;k<=2*i-1;k++){
			printf("  ");
		}
		for(int m=5;m>=i;m--){
			printf("* ");
		}
		
		
		printf("\n");
	}
	
	for(int i=n;i>=1;i--){
		for(int j=5;j>=i;j--){
			printf("* ");
		}
		for(int k=1;k<=2*i-1;k++){
			printf("  ");
		}
		for(int m=5;m>=i;m--){
			printf("* ");
		}
		
		
		printf("\n");
	}	
}
