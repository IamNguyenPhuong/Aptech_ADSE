#include <stdio.h>
#include<stdlib.h>
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void reverse(int *a){
	for(int i=0;i<5/2;i++){
		swap(a[i],a[5-1-i]);
	}
}
int main() {
   int *a=(int *)calloc(5,sizeof(int));
   for(int i=0;i<5;i++){
   	*(a+i)+=i;
   }
   for(int i=0;i<5;i++){
	printf("%d ",*(a+i));
   }
   printf("\n");
   reverse(a);
   for(int i=0;i<5;i++){
	printf("%d ",*(a+i));
   }
   free(a);
   
}

