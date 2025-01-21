#include <stdio.h>
int main(void)
{		
	int k=1;
	float k1=1.5;
	printf("%.2f\n",k1);
	printf("%2d\n",k);//Hien thi 2 ki tu, do k chi co 1 chu so nen co them 1 dau cach
	printf("%.2d\n", k);
	printf("%07.2d\n", k);
	printf("%7.2d\n", k);
    int a = 123, b = -123, c = 12345;
    printf("Day la phan bai tap\n");
    printf("%2d\n", c); // Hien thi toi thieu 2 ki tu, do 123 nen giong %d
    printf("%10.2d\n", c); // vi int la so nguyen nen .2 la vo nghia, cai nay giong %10d,"     12345" 10 ki tu, 5 dau cach
    printf("%-10.2d\n", c); // 10 ki tu, phan du la dau cach "12345     "
    printf("%-7d\n", a);   //qua de "123    "
    printf("%07.2d\n", a);// Precision có uu tien cao hon do rong, so 0 duoc uu tien cho .2d, dau cách thay cho so 0 "    123"
    printf("%07d\n", a);//%07d, am tay trai, duong ben phai, 0000123
    printf("%+0-9.4d\n", a);  //"+(0123     )" hay "+0123****"
    printf("%+09.4d\n", a);		// +0123 hay "    +0123" 9 ki tu bao gom dau cong
    printf("%+8.4d\n", a); //"   +0123"
    printf("%+07.4d\n", a); //"  +0123"
    printf("%+-07.4d\n", a); //"+0123  "
    printf("%-08.2d\n", b);//"-123****"
    printf("%-08.4d\n", b);//"-0123  " can trai, so 0 bo qua do precision, du 8 ki tu, bo 0 thanh 0123 vi .4
    return 0;
}

