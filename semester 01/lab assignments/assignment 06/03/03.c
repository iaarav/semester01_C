#include <stdio.h>

int main() {
    double x, result = 1;
    int n, i, power;

    printf("enter the number: ");
    scanf("%lf", &x);

    printf("enter the power: ");
    scanf("%d", &n);

    power = n;
    if (power < 0)
        power = -power;

    for (i = 0; i < power; i++)
        result *= x;

    if (n < 0) {
        if (x == 0)
            printf("zero cannot be raised to a negative power\n");
        else
            printf("%.2lf raised to %d is %.6lf\n", x, n, 1.0 / result);
    }
    else
        printf("%.2lf raised to %d is %.6lf\n", x, n, result);

    return 0;
}
