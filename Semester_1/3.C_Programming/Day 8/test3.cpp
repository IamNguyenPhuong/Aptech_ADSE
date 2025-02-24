#include <stdio.h>
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main() {
   int a[5]={0,1,2,3,4};
   for(int i=0;i<5/2;i++){
   	swap(a[i],a[5-1-i]);
   }
   for(int i=0;i<5;i++){
   	printf("%d ",*(a+i));
   }
   
}

