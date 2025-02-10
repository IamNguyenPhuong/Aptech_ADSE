#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int max=1;
	for(int i=1;i<=a/2;i++){
		if(a%i==0&&b%i==0){
			max=i;
		}
	}
	printf("UCLN la %d\n",max);
	printf("BCNN la %d\n",a*b/max);
}

