#include <stdio.h>
#include<stdlib.h>
int main() {
	int size=5;
   int *a=(int *)malloc(size*sizeof(int));
   for(int i=0;i<size;i++){
   	a[i]=i;
   }
   for(int i=0;i<size;i++){
   	printf("%d ",*(a+i));
   }
}

