#include <stdio.h>
void swap(int &x,int &y){
	int temp=x;
	x=y;
	y=temp;
}

void swap2(int *x, int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main() {
   int a=3;
   int b=5;
    swap2(&a,&b);
   printf("a = %d\n",a);
   printf("b = %d\n",b);
   
   
}

