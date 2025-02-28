#include <stdio.h>

int main() {
     fprintf(stdout, "Your name");
    fflush(stdout); 
    char name[50];
    fgets(name, sizeof(name), stdin);
     fprintf(stdout, "%s\n", name);
    return 0;
}

