#include <stdio.h>

int main() {
	int n;
	printf("Nhap vao n so nguyen ");
	scanf("%d",&n);
	int max=0,min=0;
	int nhap;
	printf("nhap vao so thu 1 ");
	scanf("%d",&nhap);
	max=nhap;
	min=nhap;
	for(int i=2;i<=n;i++){
		printf("nhap vao so thu %d ",i);
		scanf("%d",&nhap);
		if(max<nhap) max=nhap;
		if(min>nhap) min=nhap;
	}
	printf("Gia tri lon nhat la %d\n",max);
	printf("Gia tri nho nhat la %d\n",min);
	
}

