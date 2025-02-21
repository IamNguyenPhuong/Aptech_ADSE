#include <stdio.h>
#include<stdlib.h>

int main() {
   int *a=(int *)calloc(5,sizeof(int));
   // a la con tro tro den a[0]
   
   for(int i=0;i<5;i++){
   	printf("gia tri cua a[%d] la %d\n",i,*(a+i));
   	printf("dia chi cua a[%d] la %p\n",i,a+i);
   }
   free(a);
}

