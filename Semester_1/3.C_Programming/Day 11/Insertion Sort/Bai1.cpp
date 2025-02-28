#include <stdio.h>

void insertionSort(int *a, int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while ( a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

int main() {
    int n;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap vao gia tri thu %d: ", i);
        scanf("%d", a + i);
    }

    insertionSort(a, n);

    printf("Mang da sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

