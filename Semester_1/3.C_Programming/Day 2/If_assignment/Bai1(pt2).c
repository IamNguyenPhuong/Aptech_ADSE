#include <stdio.h>

int main() {
   long long a;
   printf("Enter your income: ");
   scanf("%lld", &a);

   long long income = a;
   long long tax = 0;

   if (a > 40000000) {
       tax += (a - 40000000) * 0.3;
       a = 40000000;
   }
   if (a > 25000000) {
       tax += (a - 25000000) * 0.25;
       a = 25000000;
   }
   if (a > 15000000) {
       tax += (a - 15000000) * 0.2;
       a = 15000000;
   }
   if (a > 9000000) {
       tax += (a - 9000000) * 0.1;
   }

   printf("Your tax is: %lld VND\n", tax);
   printf("Your income after tax: %lld VND\n", income - tax);

   return 0;
}

