#include <stdio.h>

int main() {
	int n;
	long long giaithua;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		giaithua*=i;
	}
	printf("Gia tri cua giai thua la %lld",giaithua);
}

