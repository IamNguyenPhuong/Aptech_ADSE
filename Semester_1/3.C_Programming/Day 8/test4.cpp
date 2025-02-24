#include <stdio.h>

int main() {
   int a=3;
   int *p=&a;
   int *k=&a;
   (*p)++;
   printf("%d",*k);
   
}

