#include <stdio.h>

int main() {
    int n, number, smallest, largest, i;

    printf("how many numbers do you want to enter? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("please enter at least one number\n");
        return 0;
    }

    printf("enter number 1: ");
    scanf("%d", &number);
    smallest = largest = number;

    for (i = 2; i <= n; i++) {
        printf("enter number %d: ", i);
        scanf("%d", &number);

        if (number < smallest)
            smallest = number;
        if (number > largest)
            largest = number;
    }

    printf("\nsmallest number: %d\n", smallest);
    printf("largest number: %d\n", largest);
    printf("range: %d\n", largest - smallest);

    return 0;
}
