#include <stdio.h>

int main() {
   int n;
	printf("Nhap vao so luong phan tu trong mang ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap vao phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nDay moi sau khi bien doi la\n");
	int temp;
	
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
   //bubble sort
}

