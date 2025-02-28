#include <stdio.h>
void swap(int *a, int *b){
	int temp= *a;
	*a=*b;
	*b=temp;
}
int main() {
   int n;
   fprintf(stdout,"Nhap vao n: ");
   fscanf(stdin,"%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
   	printf("Nhap vao gia tri thu %d: ",i);
   	scanf("%d",a+i);
   }
   
   for(int i=0;i<n;i++){
   	for(int j=i+1;j<n;j++){
   		if(a[i]>a[j]){
   			swap(&a[i],&a[j]);
		   }
	   }
   }
   for(int i=0;i<n;i++){
   	printf("%d ",*(a+i));
   	
   }
   
}

