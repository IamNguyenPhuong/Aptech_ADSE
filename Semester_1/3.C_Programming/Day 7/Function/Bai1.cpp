#include <stdio.h>
int tong(int a,int b){
	int total=a+b;
	return total;
}
int main() {
   int a,b;
   scanf("%d%d",&a,&b);
   printf("tong cua 2 so la %d",tong(a,b));
   
}

