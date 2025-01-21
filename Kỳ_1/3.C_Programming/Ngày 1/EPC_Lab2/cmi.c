#include <stdio.h>

int main() {
   printf("Enter the distances in inches: ");
   int a;
   scanf("%d",&a);
   float b=a*2.54;
   printf("Your distances in cm is: %.2f",b);
   return 0;
   
}

