#include <stdio.h>
int isPrime(int num){
	for(int i=2;i<num;i++){
		if(num%i==0) return 0;
	}
	return 1;
}
int countPrimes(int arr[],int size){
	int count=0;
	for(int i=0;i<size;i++ ){
		if(isPrime(arr[i])==1){
			count++;
		}
	}
	return count;
}
int main() {
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Enter the array elements: ");
		scanf("%d",&a[i]);
	}
	int tong=countPrimes(a,n);
	printf("Total prime numbers in the array: %d",tong);
}

