#include <stdio.h>
int max(int a,int b,int c){
	int max1=a;
	if(max1<b) max1=b;
	if(max1<c) max1=c;
	return max1;
}
int main() {
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   int max2=max(a,b,c);
   printf("Gia tri lon nhat la %d",max2);
   
}

