#include <stdio.h>
int tong(int a, int b){
	int tong=a+b;
	return tong;
}
int tong2(int *x,int *y){
	int tong=*x+*y;
	return tong;
}
int tong3(int &x,int &y){
	int tong=x+y;
	return tong;
}
int main() {
   int a=3;
   int b=5;
   int c=tong(a,b);
   int d=tong2(&a,&b);
   int e=tong3(a,b);
   printf("Tong = %d",e);
   
   
}

