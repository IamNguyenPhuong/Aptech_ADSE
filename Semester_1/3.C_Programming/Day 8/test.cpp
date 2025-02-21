#include <stdio.h>

int main() {
    int a = 10;   // Khai bao mot bien nguyen
    int *p;      // Khai bao mot con tro kieu nguyen

    p = &a;      // Gan dia chi cua bien a cho con tro p

    printf("Gia tri cua a: %d\n", a);         // In gia tri cua a
    printf("Dia chi cua a: %p\n", (void *)&a); // In dia chi cua a
    printf("Gia tri cua con tro p: %p\n", (void *)p); // In dia chi luu trong con tro p
    printf("Gia tri tai dia chi con tro p tro toi: %d\n", *p); // In gia tri tai dia chi con tro p tro toi
    printf("Dia chi cua chinh bien con tro p: %p\n", (void *)&p); // In dia chi cua chinh bien con tro p
    printf("Size of a = %d\n",sizeof(int));
    printf("Size of pointer =%d\n",sizeof(p));
    (*p)++;
    printf("Gia tri cua a: %d\n", a);         // In gia tri cua a
    int **ptr=&p;
    printf("Size of pointer =%d\n",sizeof(ptr));
    (**ptr)++;
    printf("Gia tri cua a: %d\n", a); 
    return 0;
}

