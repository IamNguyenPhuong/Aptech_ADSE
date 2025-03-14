#include <stdio.h>
int  divisible(int n){
	if(n%3==0&&n%5==0){
		return 1;
	}
	else return 0;
}
int belongs50_150(int n){
	if(50<=n&&n<=150){
		return 1;
	}
	else return 0;
}
int main() {
	printf("Enter a number: ");
	int n;
	scanf("%d",&n);
	 int k1=divisible(n);
	 int k2=belongs50_150(n);
	 if(k1==1&&k2==1){
	 	printf("n is divisible by 3 and 5 and is in the range 50-500.");
	 }
	 else{
	 	printf("n does not meet the conditions.");
	 }
}

