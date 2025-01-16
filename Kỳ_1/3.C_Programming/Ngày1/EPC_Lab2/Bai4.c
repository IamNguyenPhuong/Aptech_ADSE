#include <stdio.h>

int main() {
   
   float Length,Width;
   printf("Enter length and width of rectangle: ");
   scanf("%f%f",&Length,&Width);
   float Perimeter=2*(Length+Width);
   float TheArea=Length*Width;
   printf("The perimeter of rectangle is %f ",Perimeter);
   printf("The Area of the rectangle is %f",TheArea);
}

