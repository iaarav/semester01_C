#include <math.h>
#include <stdio.h>

int main() {
  float p, r, t, ci;

  printf("Enter the principal sum: ");
  scanf("%f", &p);

  printf("Enter the time period (in years): ");
  scanf("%f", &t);

  printf("Enter the rate of interest: ");
  scanf("%f", &r);

  ci = p * (pow((1 + r / 100), t) - 1);

  printf("\n\nThe compount interest on the principal sum of %.2f  over %.2f "
         "years is: ₹%.2f\n",
         p, t, ci);

  return 0;
}
