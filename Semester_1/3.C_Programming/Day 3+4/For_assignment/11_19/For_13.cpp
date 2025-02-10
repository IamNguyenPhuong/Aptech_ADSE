#include <stdio.h>

int main() {
   
   int n;
   scanf("%d",&n);
   int n1=1,n2=1,n3=2;
   
   for(int i=1;i<=n;i++){
   		printf("%d ",n1);
   		n1=n2;
   		n2=n3;
   		n3=n1+n2;
   }
}

