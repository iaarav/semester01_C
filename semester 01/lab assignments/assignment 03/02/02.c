#include <math.h>
#include <stdio.h>

int main() {
  double x1, x2, d;
  int a, b, c;

  printf("Enter the value of a: ");
  scanf("%d", &a);

  printf("Enter the value of b: ");
  scanf("%d", &b);

  printf("Enter the value of c: ");
  scanf("%d", &c);

  d = sqrt(pow(b, 2) - (4.0 * a * c));

  x1 = (-b + d) / (2.0 * a);
  x2 = (-b - d) / (2.0 * a);

  printf(
      "\nThe first root of the equation (%d)x\xc2\xb2 + (%d)x + (%d) is: %.2lf",
      a, b, c, x1);

  printf("\nThe second root of the equation (%d)x\xc2\xb2 + (%d)x + (%d) is: "
         "%.2lf\n",
         a, b, c, x2);

  return 0;
}
