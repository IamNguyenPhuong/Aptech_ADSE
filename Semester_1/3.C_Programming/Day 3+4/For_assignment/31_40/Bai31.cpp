#include <stdio.h>
#include <math.h>

int main() {
   int x,n;
   printf("Nhap vao x va n");
   scanf("%d%d",&x,&n);
   double kq=0;
   for(int i=1;i<=n;i++){
   	kq+=x;
   	kq=sqrt(kq);
   }
   printf("%f",kq);
   
   
}

