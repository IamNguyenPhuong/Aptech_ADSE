//#include <stdio.h>
//#include <math.h>
//int main() {
//   int x,n;
//   scanf("%d%d",&x,&n);
//   long long tich=pow(x,n);
//   printf("%lld",tich);
//}

#include<stdio.h>
int main(){
	int x,n;
	scanf("%d%d",&x,&n);
	long long pow=1;
	for(int i=1;i<=n;i++){
		pow=pow*x;
	}
	printf("%lld",pow);
}
