#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[] = "3.145";

    // String to float
    float f = atof(s);
    printf("Float: %f\n", f);

    // String to int
    int i = atoi(s);
    printf("Integer: %d\n", i);

    // String to long
    long l = atol(s);
    printf("Long: %ld\n", l);

    return 0;
}