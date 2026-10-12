#include <stdio.h>

int main() {
    int a, b, divisor, hcf = 1;

    printf("enter first number: ");
    scanf("%d", &a);
    
    printf("enter second number: ");
    scanf("%d", &b);

    if (a == 0 && b == 0) {
        printf("HCF is not defined for 0 and 0\n");
        return 0;
    }

    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    for (divisor = 1; divisor <= a && divisor <= b; divisor++) {
        if (a % divisor == 0 && b % divisor == 0)
            hcf = divisor;
    }

    printf("HCF is %d\n", hcf);

    return 0;
}
