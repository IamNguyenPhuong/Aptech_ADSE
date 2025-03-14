#include <stdio.h>

// H�m d? in l?i ch�o
void sayHello() {
    printf("Hello, world!\n");
}

// H�m d? in t?m bi?t
void sayGoodbye() {
    printf("Goodbye, world!\n");
}

// H�m nh?n con tr? h�m l�m tham s?
void executeFunction(void (*funcPtr)()) {
    funcPtr();
}

int main() {
    void (*funcPtr)(); // Khai b�o con tr? h�m

    funcPtr = sayHello;
    executeFunction(funcPtr); // G?i h�m executeFunction v?i con tr? h�m sayHello

    funcPtr = sayGoodbye;
    executeFunction(funcPtr); // G?i h�m executeFunction v?i con tr? h�m sayGoodbye

    return 0;
}

