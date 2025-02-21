#include <stdio.h>
int check(int a){
	return a%2==0;
}
int main() {
   int a;
   scanf("%d",&a);
   int k=check(a);
   if(k==0) printf("k la so le");
   else printf("k la so chan");
   
}

