#include <stdio.h>

int main() {
    int a[3] = {1, 2, 3};
    
    printf("Dia chi cua a (dia chi cua phan tu dau tien a[0]): %p\n", (void*)a);
    printf("Dia chi cua a[0]: %p\n", (void*)&a[0]);
    printf("Dia chi cua a nhu mot con tro (void*)&a: %p\n", (void*)&a);
	int *b=a;
	printf("%d",b[2]);
    return 0;
    // ten mang a ko phai la con tro, mac du dc su dung nhu 1 con tro
}

