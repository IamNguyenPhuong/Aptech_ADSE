#include <stdio.h>

int main() {
   
   int a;
   float SoTien;
   scanf("%d",&a);
   if(a<=50) SoTien=a*1.5;
   else if(a<=100) SoTien=50*1.5+(a-50)*2;
   else SoTien=50*1.5+50*2+(a-100)*2.5;
   printf("Tong so tien %.2f",SoTien);
}

