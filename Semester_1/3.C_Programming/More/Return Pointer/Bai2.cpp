#include <stdio.h>
#include<stdlib.h>
int* returnk(int size){
	int *a=(int *)malloc(size*sizeof(int ));
	for(int i=0;i<size;i++){
		*(a+i)=i;
	}
	return a;
}
int main() {
   int size=5;
   int *b=returnk(size);
   for(int i=0;i<size;i++){
   	printf("%d ",b[i]);
   }
   
}
// that ra no cung cha co gi, chi la them * trc ten mang
