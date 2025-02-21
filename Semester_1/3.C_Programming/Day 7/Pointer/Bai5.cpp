#include <stdio.h>
#include<stdlib.h>
int main() {
   
   int n;
   printf("Nhap vao so nguyen n: ");
   scanf("%d",&n);
   int max;
   int *a=(int *)calloc(n,sizeof(int));
   for(int i=0;i<n;i++){
   	printf("nhap gia tri cua a[%d]\n",i);
   	scanf("%d",a+i);
   	max=*a;
   	if(max<*(a+i)) max=*(a+i);
   }
   printf("So lon nhat la %d",max);
   free(a);
   
   
}

