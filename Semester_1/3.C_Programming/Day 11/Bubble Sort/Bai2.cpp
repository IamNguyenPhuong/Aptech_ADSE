#include <stdio.h>
void swap(int *a, int *b){
	int temp= *a;
	*a=*b;
	*b=temp;
}
void BubbleSort(int *a,int n){
	for(int i=n-1;i>=0;i--){
   	 for(int j=0;j<i;j++){
   		if(a[j]>a[j+1]){
   			swap(&a[j],&a[j+1]);
		   }
	   } 	
   }
}
int main() {
   int n;
   printf("Nhap vao n: ");
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
   	printf("Nhap vao gia tri thu %d: ",i);
   	scanf("%d",a+i);
   }
   BubbleSort(a,n);
   for(int i=0;i<n;i++){
   	printf("%d ",*(a+i));
   }
   
}

