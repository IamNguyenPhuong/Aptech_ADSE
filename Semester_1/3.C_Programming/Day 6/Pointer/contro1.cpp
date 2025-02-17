#include <stdio.h>

main(){
	int a = 5;
	int *p = &a;//con tro p co kieu la (int *)
	p = &a;
	*p = 10;
	printf("gia tri cua a la: %d\n", *&a);
	printf("Dia chi cua a la: %x\n", &a);
	printf("Dia chi cua con tro p la: %x\n", p);
	printf("Gia tri tai dia chi cua con tro p la: %d\n", *p);
	
	int b = 20;
	
	printf("B: Gia tri %d, Dia chi la: %x\n", b, &b);
	
	
	*(p - 1) = 50;
	*p++;
	printf("Dia chi cua con tro p la: %x\n", p);
	printf("B: Gia tri %d, Dia chi la: %x\n", b, &b);
}
