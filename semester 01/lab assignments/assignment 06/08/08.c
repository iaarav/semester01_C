#include <stdio.h>

int main() {
    int a, b, remainder;

    printf("enter first number: ");
    scanf("%d", &a);
    
    printf("enter second number: ");
    scanf("%d", &b);

    if (a == 0 && b == 0) {
        printf("GCD is not defined for 0 and 0\n");
        return 0;
    }

    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("GCD is %d\n", a);

    return 0;
}
