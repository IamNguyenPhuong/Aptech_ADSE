#include <stdio.h>

int main(void) {
    double a = 12345.6789;
    printf("\n Formatting with %%e or %%E\n");
    printf("%e\n", a);
    printf("%5e\n", a);
    printf("%5.2E\n", a);
    printf("%5.0E\n", a);
    printf("%#5.0E\n", a);
    printf("%05e\n",a);
    printf("%010.2e\n", a);
    printf("%+010.1e\n", a);

    printf("\nFormatting with %%lf\n");
    printf("%lf\n", a);
    printf("%5lf\n", a);
    printf("%4.2lf\n", a);
    printf("%10.2lf\n", a);
    printf("%-10.2lf\n", a);
    printf("%10.0lf\n", a);
    printf("%#10.0lf\n", a);
    printf("%+010.2lf\n",-a);

    printf("\nFormatting with %%g\n");
    printf("%g\n", a);
    printf("%9g\n", a);
    printf("%4.3g\n", a);
    printf("%4.5g\n", a);
    printf("%#4.5g\n", a);
    printf("%#9.5g\n", a);
    printf("%5.4g\n", a);

    return 0;
}
// BAI NAY T XIN KIEU NHA!!!
// CHI CO AI BI DO HOI MOI LAM!!!
// MAY ONG NGHI RA BAI NAY CAU TIME VCL!!!
