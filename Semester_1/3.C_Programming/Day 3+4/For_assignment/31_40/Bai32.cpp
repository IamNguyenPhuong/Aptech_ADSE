#include <stdio.h>

int main() {
   int n;
   printf("nhap vao so luong phan tu");
   scanf("%d",&n);
   int kt;
   int dem1=0,dem2=0,dem3=0;
   for( int i=1;i<=n;i++ ){
   		printf("nhap vao phan tu thu %d ",i);
   		scanf("%d",&kt);
   		if(kt<0) dem1++;
   		else if(kt==0) dem2++;
   		else dem3++;
   }
   printf("count so nguyen am = %d\n",dem1);
    printf("count so 0 = %d\n",dem2);
    printf("count so nguyen duong = %d\n",dem3);
   
}

