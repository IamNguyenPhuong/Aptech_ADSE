#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	long long tong=0;
	for(int i=1;i<=n;i+=2){
		tong+=i*i;
	}
	printf("Gia tri binh phuong cac so le la %lld",tong);
}

