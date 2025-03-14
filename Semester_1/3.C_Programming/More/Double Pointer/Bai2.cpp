#include <stdio.h>

int main() {
    int a[3][5] = {0};

    // In dia chi cua ten mang a va cac hang a[i]
    printf("Dia chi cua a: %p\n", (void*)a);
    for (int i = 0; i < 3; i++) {
        printf("Dia chi cua a[%d]: %p\n", i, (void*)a[i]);
    }

    return 0;
}

