#include <stdio.h>

int main() {
	for(int i=0;i<=255;i++){
		printf("%3d = %c ",i,i);
		if(i%5==0) printf("\n");
	}
}

