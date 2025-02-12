#include <stdio.h>

int main() {
   for(int i=1;i<=10;i++){
   	for(int j=2;j<=9;j++){
   		printf("%d * %2d = %2d\t",j,i,i*j);
   	}printf("\n");
   }
}
