#include <stdio.h>

int main() {
    int n, original, digit, sum;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (n = 1; n <= 500; n++) {
        original = n;
        sum = 0;

        while (original > 0) {
            digit = original % 10;
            sum += digit * digit * digit;
            original /= 10;
        }

        if (sum == n)
            printf("%d\n", n);
    }

    return 0;
}
