#include <stdio.h>

int main() {
	int a,b,c;
	printf("Nhap vao diem toan, van, anh:");
	scanf("%d%d%d",&a,&b,&c);
	float avg=(a+b+c)/3;
	if(avg>=8&&a>=6.5&&b>=6.5&&c>=6.5) printf("Hoc sinh gioi");
	else if(avg>=6.5&&a>=5&&b>=5&&c>=5) printf("Hoc sinh kha");
	else if(avg>=5&&a>=3.5&&b>=3.5&&c>=3.5) printf("Hoc sinh tb");
	else printf("Hoc sinh yeu");
}

