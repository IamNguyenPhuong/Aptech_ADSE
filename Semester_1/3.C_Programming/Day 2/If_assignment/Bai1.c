#include <stdio.h>

int main() {
	printf("Enter your income: ");
	int a;
	scanf("%d",&a);
	printf("Your income is %d trieu dong\n",a);
	float tax;
	if(a<=9) tax=(9-a)*0;
	else if(a<=15) tax=9*0+(a-9)*0.1;
	else if(a<=25) tax=9*0+(15-9)*0.1+(a-15)*0.2;
	else if(a<=40) tax=9*0+(15-9)*0.1+(25-15)*0.2+(a-25)*0.25;
	else tax=9*0+(15-9)*0.1+(25-15)*0.2+(40-25)*0.25+(a-40)*0.3;
	printf("your tax is %f\n",tax);
	printf("your income after tax %f trieu dong",(float)a-tax);
	
	
	
}

