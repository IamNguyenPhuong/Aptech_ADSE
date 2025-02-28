#include <stdio.h>
//Nhap vao 1 so va tinh giai thua
int giaiThua(int n){
	int tich=1;
	for(int i=1;i<=n;i++){
		tich*=i;
	}
	return tich;
}
int main() {
   int n;
   scanf("%d",&n);
   printf("%d",giaiThua(n));
   
}

