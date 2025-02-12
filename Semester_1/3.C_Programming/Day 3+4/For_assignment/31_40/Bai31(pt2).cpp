#include <stdio.h>
#include<math.h>

int main() {
   int x,n;
   printf("Nhap vao x va n");
   scanf("%d%d",&x,&n);
   double tong=0;
   for(int i=0;i<=n;i++){
   		tong+=(pow(x,i)/(i+1));
   }
   printf("%f",tong);
   
}

