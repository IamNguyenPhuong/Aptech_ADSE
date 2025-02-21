#include <stdio.h>
#include<stdlib.h>
int main() {
   
   int n;
   printf("Nhap vao so nguyen n");
   scanf("%d",&n);
   int *a=(int *)calloc(n,sizeof(int));
   for(int i=0;i<n;i++){
   	printf("nhap gia tri cua a[%d]\n",i);
   	scanf("%d",a+i);
   }
   for(int i=0;i<n;i++){
   	printf("%d ",*(a+i));
   }
   free(a);
}

