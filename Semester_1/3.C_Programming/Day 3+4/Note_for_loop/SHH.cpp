#include <stdio.h>
#include<math.h>

//int main() {
//	int n;
//	scanf("%d",&n);
//	long long tong=0;
//	for(int i=1;i<=n/2;i++){
//		if(n%i==0) tong+=i;
//	}
//	if(n==tong) printf("SHH");
//	else printf("No");
//}
//Enter a number and check

// Check 1 million number

//int main(){
//	
//	for (int i=1;i<=1000000;i++){
//	long long tong =0;
//	for(int j=1;j<=i/2;j++){
//		if(i%j==0) tong+=j;
//	}
//	if(i==tong) printf("%d\t",i);
//}
//}


int main(){
	for(int i=2;i<=1000000;i++){
		long long tong=1;
		for(int j=2;j<=sqrt(i);j++){
				if(i%j==0){
				tong+=j;
				if(j*j!=i){
					tong +=i/j;
				}
			}
		}
		if(i==tong) printf("%d\t",i);
		
	}
	
}



