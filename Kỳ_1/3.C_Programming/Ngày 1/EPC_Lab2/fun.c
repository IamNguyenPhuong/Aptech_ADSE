/* Is it a C program? */
#include <stdio.h>
int main()
{
    int a, b, c;
    a = 2.45; // a should be float
    b = a + 2;
    scanf("%d", &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}

