#include <stdio.h>

int main() {
   
   float f;
   float Total;
   scanf("%f",&f);
   if(f<1) Total=10;
   else if(f<=5) Total=10+(f-1)*8;
   else Total=10+8*4+(f-5)*6;
   printf("Tong so tien la %.2f",Total);
}

