#include <stdio.h>

int main() {
   float a,b,c;
   printf("Enter your first number: ");
   scanf("%f",&a);
   printf("Enter your seconed number: ");
   scanf("%f",&b);
   printf("Values entered are a=%f and b=%f\n",a,b);
   c=a;
   a=b;
   b=c;
   printf("Values after swap are a=%f and b=%f",a,b);
   
}

