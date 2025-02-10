#include <stdio.h>

int main() {
	int loai;
	printf("Enter ticket type");
	scanf("%d",&loai);
	int lop;
	printf("Enter ticket class");
	scanf("%d",&lop);
	int dk;
	printf("Enter conditions");
	scanf("%d",&dk);
	int base_price=0;
	if(lop==1) base_price=5000000;
	else if(lop==2) base_price=3000000;
	else if(lop==3) base_price=1500000;
	else {
		printf("Error");
		return 0;
	}
	if(loai==1) base_price=base_price*0.9;
	else printf("No discount apply for this situation\n");
	if(dk==0) printf("You have to pay %d",base_price);
	else {
		base_price=base_price*0.95;
		printf("You have to pay %d",base_price);
	}
}

