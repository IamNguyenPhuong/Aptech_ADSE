#include <stdio.h>

int main() {
   int a=5;
   printf("Dia chi cua a %d\n",(void *)&a);
   int b=5;
   printf("Dia chi cua b %d\n",(void *)&b);
   long long c=5;
   printf("Dia chi cua c %d\n",(void *)&c);
   long long *d=&c;
     printf("Dia chi cua d %d\n",(void *)&d);
     printf("Dia chi d dang tro toi %d\n",d);
     d++;
    printf("Dia chi d dang tro toi %d\n",d);
    printf("gia tri d dang tro toi %d\n",*d);
     
     
   
   
}

