#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("enter first number: ");
    scanf("%lf", &a);

    printf("enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("enter second number: ");
    scanf("%lf", &b);

    switch (op) {
        case '+':
            printf("\nresult: %.2lf\n", a + b);
            break;
        case '-':
            printf("\nresult: %.2lf\n", a - b);
            break;
        case '*':
            printf("\nresult: %.2lf\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("\nresult: %.2lf\n", a / b);
            else
                printf("\ncannot divide by zero\n");
            break;
        case '%':
            if ((int)b != 0)
                printf("\nresult: %d\n", (int)a % (int)b);
            else
                printf("\ncannot divide by zero\n");
            break;
        default:
            printf("\ninvalid operator\n");
    }

    return 0;
}
