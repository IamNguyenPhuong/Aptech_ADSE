#include <stdio.h>
int main(){
	int n;
    scanf("%d",&n);
	int a[3]={5000,2000,1000};
	int k;
	for(int i=0;i<3;i++){
		k=n/a[i];
   		n=n-k*a[i];
   		printf("So luong to %d la %d\n",a[i],k);
	}
	
}
