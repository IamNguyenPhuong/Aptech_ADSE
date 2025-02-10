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
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

