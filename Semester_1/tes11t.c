#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5;  // S? h�ng c?a kim t? th�p

    for(i = 1; i <= rows; i++) {
        for(j = i; j < rows; j++) {
            printf(" ");
        }
        for(k = 1; k <= (2*i-1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

