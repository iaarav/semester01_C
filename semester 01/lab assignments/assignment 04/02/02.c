#include <stdio.h>

int main() {
    int a, b, sum;
    double mean;

    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter second number: ");
    scanf("%d", &b);

    sum = a+b;
    mean = (double)sum/2;

    printf("\nthe mean of the entered two numbers: %.2lf\n", mean);
    
    return 0;
}