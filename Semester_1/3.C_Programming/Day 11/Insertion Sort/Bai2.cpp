#include <stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void Sort(int *a,int n){
	while(a[n-2]>a[n-1]){
		swap(&a[n-2],&a[n-1]);
		n--;
	}
}
int main() {
   
   int a[]={2,3,5,7,4};
   int n=sizeof(a)/sizeof(int);
   Sort(a,n);
   for(int i=0;i<n;i++){
   	printf("%d ",a[i]);
   }
}

