#include <stdio.h>

int main() {
	long long a;
	printf("Nhap vao so nguyen duong a:");
	scanf("%d",&a);
	int dem=0;
	while(a!=0){
		a/=10;
		dem++;
	}
	printf("So nguyen duong a co %d chu so ",dem);
}

