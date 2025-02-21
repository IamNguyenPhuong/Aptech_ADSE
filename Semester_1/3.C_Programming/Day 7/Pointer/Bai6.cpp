#include <stdio.h>
#include <stdlib.h>


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
   printf("User co muon mo rong mang khong\n");
   printf("0 for no, 1 for yes\n");
   int check;
   scanf("%d",&check);
   if(check){
   	printf("User muon nhap bao nhieu phan tu");
   	int pp;
   	scanf("%d",&pp);
   	a=(int *) realloc(a,pp*sizeof(int));
   	for(int i=0;i<pp;i++){
   	printf("nhap gia tri cua a[%d]\n",i);
   	scanf("%d",a+i);
   }
   for(int i=0;i<pp;i++){
   	printf("%d ",*(a+i));
  	 }
	}else return 0;
	
}

