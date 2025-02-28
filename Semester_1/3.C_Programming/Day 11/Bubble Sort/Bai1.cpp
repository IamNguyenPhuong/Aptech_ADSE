#include <stdio.h>
void swap(int *a, int *b){
	int temp= *a;
	*a=*b;
	*b=temp;
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
   for(int i=n-1;i>=0;i--){
   	for(int j=0;j<i;j++){
   		if(a[j]>a[j+1]){
   			swap(&a[j],&a[j+1]);
		   }
	   } 	
   }
   for(int i=0;i<n;i++){
   	printf("%d ",*(a+i));
   }
}

