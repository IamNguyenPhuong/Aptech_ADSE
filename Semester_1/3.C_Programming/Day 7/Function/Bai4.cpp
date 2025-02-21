#include <stdio.h>
int giaiThua(int n){
	int k;
	if(n>=1){
		k=n*giaiThua(n-1);
	}
	else return 1;
	return k;
	

	
}
int main() {
   int a;
   scanf("%d",&a);
   int b=giaiThua(a);
   printf("Giai thua la %d",b);
   
   
}

