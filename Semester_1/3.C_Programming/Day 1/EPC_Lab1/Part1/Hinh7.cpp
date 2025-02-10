#include <stdio.h>

//int main() {
//
//	for(int i=1;i<=5;i++){
//		if(i%2==0){
//			printf(" ");
//		}
//		for(int j=1;j<=9;j++){
//			if(j%2==1)
//			printf("*");
//			else printf(" ");
//	}
//	printf("\n");
//	}
//}
// Lay dong dau lam mau, cai dong con lai chia het cho 2 thi cach 1 cai

int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=10;j++){
			if((i+j)%2==0){
				printf("*");
			}
			else printf(" ");
		}printf("\n");
	}
}
