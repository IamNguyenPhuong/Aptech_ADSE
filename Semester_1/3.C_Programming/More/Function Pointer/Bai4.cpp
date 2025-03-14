#include <stdio.h>

// Hàm d? in l?i chào
void sayHello() {
    printf("Hello, world!\n");
}

// Hàm d? in t?m bi?t
void sayGoodbye() {
    printf("Goodbye, world!\n");
}

// Hàm nh?n con tr? hàm làm tham s?
void executeFunction(void (*funcPtr)()) {
    funcPtr();
}

int main() {
    void (*funcPtr)(); // Khai báo con tr? hàm

    funcPtr = sayHello;
    executeFunction(funcPtr); // G?i hàm executeFunction v?i con tr? hàm sayHello

    funcPtr = sayGoodbye;
    executeFunction(funcPtr); // G?i hàm executeFunction v?i con tr? hàm sayGoodbye

    return 0;
}

