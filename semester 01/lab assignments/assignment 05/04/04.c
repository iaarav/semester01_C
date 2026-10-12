#include <stdio.h>

int main() {
    int days;
    double fine;

    printf("enter number of days late: ");
    scanf("%d", &days);

    if (days < 0)
        printf("invalid number of days\n");
    else if (days == 0)
        printf("no fine\n");
    else if (days <= 5) {
        fine = days * 0.50;
        printf("fine: Rs. %.2lf\n", fine);
    }
    else if (days <= 10) {
        fine = 5 * 0.50 + (days - 5) * 1.00;
        printf("fine: Rs. %.2lf\n", fine);
    }
    else if (days <= 30) {
        fine = 5 * 0.50 + 5 * 1.00 + (days - 10) * 5.00;
        printf("fine: Rs. %.2lf\n", fine);
    }
    else
        printf("membership cancelled\n");

    return 0;
}
