#include <stdio.h>
#include<math.h>

//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0){
//			 printf("n khong phai so nguyen to");
//			 return 0;
//		}
//	
//	}
//	printf("n la so nguyen to");
//		
//}


int main(){
	int n=1000000;
	int kt=0;
	printf("2\t3\t");
	for(int i=3;i<=n;i+=2){
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0) {
				kt=0;
				break;
			}
			
			else kt=1;
		}
		if(kt==1) printf("%d\t",i);
		
	}
}
