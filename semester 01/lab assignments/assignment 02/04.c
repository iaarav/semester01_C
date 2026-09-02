#include <stdio.h>

int main() {
  float p, r, t, si;

  printf("Enter the principal sum: ");
  scanf("%f", &p);

  printf("Enter the time period (in years): ");
  scanf("%f", &t);

  printf("Enter the rate of interest: ");
  scanf("%f", &r);

  si = (p * r * t) / 100.0;

  printf("\nThe simple interest on the principal sum of %.2f  over %.2f years is: ₹%.2f\n",
         p, t, si);

  return 0;
}
