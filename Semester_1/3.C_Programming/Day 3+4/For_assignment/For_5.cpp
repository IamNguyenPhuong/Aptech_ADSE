#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	float tong=0;
	for(int i=1;i<=n;i++){
		tong+=(float)1/i;
	}
	printf("Gia tri cua tong la %f",tong);
}

