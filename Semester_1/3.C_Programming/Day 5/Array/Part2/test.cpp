#include <stdio.h>

int main() {
   
  
	char b[5]={'h','e',' ','l','o'};
	char a[5];
	a[4]=b[0];
	a[3]=b[1];
	a[2]=b[2];
	a[1]=b[3];
	a[0]=b[4];
   printf("%s",a);
}

