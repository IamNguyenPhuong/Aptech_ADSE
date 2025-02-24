#include <stdio.h>
int isPrime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int countPrimes(int start, int end){
	int count=0;
	for(int i=start;i<=end;i++){
		if(isPrime(i)==1){
			count++;
		}
	}
	return count;
}
void prime(int start, int end){
		int count=0;
		for(int i=start;i<=end;i++){
		if(isPrime(i)==1){
			printf("%d ",i);
		}
	}
}
int main() {
	int a,b;
	printf("Enter the range (start and end): ");
	scanf("%d%d",&a,&b);
	int k=countPrimes(a,b);
	printf("There are %d prime numbers between %d and %d.\n",k,a,b);
	printf("Prime numbers between 10 and 30 are: ");
	prime(a,b);
}

