#include <stdio.h>
#include<math.h>
//Vi?t chuong trình tính dân s? c?a m?t thành ph? sau 10 nam n?a, bi?t r?ng dân s? hi?n nay là 6.000.000, t? l? tang dân s? hàng nam là 1.8% .

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
