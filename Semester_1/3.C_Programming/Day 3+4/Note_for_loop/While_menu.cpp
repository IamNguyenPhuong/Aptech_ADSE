#include <stdio.h>

int main() {
	
	printf("--------Menu--------\n");
	printf("1.Banh trung\n");
	printf("2.Coca\n");
	printf("3.Pepsi\n");
	printf("4.C2\n");
	int n;
	do{
		printf("Nhap lua chon:");
		scanf("%d",&n);
	switch(n){
		case 1:
			printf("Ban da chon Banh trung\n");
			break;
		case 2:
			printf("Ban da chon Coca\n");
			break;
		case 3:
			printf("Ban da chon Pepsi\n");
			break;
		case 4:
			printf("Ban da chon C2\n");
			break;
		default:
			printf("Ban da thoat\n");
			return 0;
	}
	
	}while(n);
}

