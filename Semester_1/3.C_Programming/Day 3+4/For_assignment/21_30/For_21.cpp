#include <stdio.h>
#include<math.h>
//Vi?t chuong tr�nh t�nh d�n s? c?a m?t th�nh ph? sau 10 nam n?a, bi?t r?ng d�n s? hi?n nay l� 6.000.000, t? l? tang d�n s? h�ng nam l� 1.8% .

//int main() {
//	double A=6000000*pow((1+0.018),10);
//	printf("%f",A);
//	//A = P(1 + r)^n
//}

int main(){
	int a=6000000;
	for(int i=1;i<=10;i++){
		a*=1.018;
	}
	printf("%d",a);
}
