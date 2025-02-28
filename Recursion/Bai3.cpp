#include <stdio.h>
int giaiThua(int n){
	if(n==0){
		return 1;
	}
	return n*giaiThua(n-1);
}
int main() {
   int n;
   scanf("%d",&n);
   int k=giaiThua(n);
   printf("%d",k);
}

