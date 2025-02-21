#include <stdio.h>

int main() {
   float a=5.5;
   printf("%p\n",(void *)&a);
   int b=5;
   printf("%p\n",(void *)&b);
   int *p=&b;
   printf("Dia chi p dang tro toi la %p\n",p);
   printf("Gia tri p dang tro toi la %d\n",*p);
	p++;
   printf("Dia chi p dang tro toi la %p\n",p);
	printf("Gia tri a  la %f\n",a);
   printf("Gia tri p dang tro toi la %d\n",*p);
   printf("Dia chi goc cua pointer  la %p\n",(void *)&p);
   float c=5.4;
   printf("%p\n",(void *)&c);
}

