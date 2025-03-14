#include <stdio.h>
void swap(int *a,int *b){
	int c=*a;
	*a=*b;
	*b=c;
}
int main() {
   
   int a=5;
   int b=3;
   int *c=&a;
   swap(c,&b);
   printf("%d %d",a,b);
}

