#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("enter a non-negative number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("factorial is not defined for negative numbers\n");
    else if (n > 20)
        printf("number is too large to calculate factorial\n");
    else {
        for (i = 1; i <= n; i++)
            factorial *= i;

        printf("factorial of %d is %llu\n", n, factorial);
    }

    return 0;
}
