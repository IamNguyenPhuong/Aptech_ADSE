#include <stdio.h>
int isPrime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}	return 1;
}
int main() {
	int n;
	scanf("%d",&n);
	int k=isPrime(n);
	if(k) printf("La so nguyen to");
	else printf("Khong phai so nguyen to");
	
}

