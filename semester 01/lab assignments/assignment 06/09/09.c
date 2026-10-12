#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("how many terms of the Fibonacci series do you want? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("please enter a positive number of terms\n");
        return 0;
    }

    printf("Fibonacci series: ");
    for (i = 1; i <= n; i++) {
        printf("%d", first);
        if (i < n)
            printf(" ");
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}
