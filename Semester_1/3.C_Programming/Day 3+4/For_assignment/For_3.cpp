#include <stdio.h>
#include<math.h>

int main() {
	int a;
	scanf("%d",&a);
	for(int i=1;i<=sqrt(a);i++){
		if(a%i==0){
			printf("%d la uoc cua so nguyen ban dau\n",i);
			if(a==i*i) continue;
			printf("%d la uoc cua so nguyen ban dau\n",a/i);
		}
	}
}

