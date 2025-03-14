#include <stdio.h>
void sayHello() {
    printf("Hello, world!\n");
}

void sayGoodbye() {
    printf("Goodbye, world!\n");
}

int main() {
    void (*funcPtr)(void);
    funcPtr = sayHello;
    funcPtr();
    funcPtr = sayGoodbye;
    funcPtr();

    return 0;
}

