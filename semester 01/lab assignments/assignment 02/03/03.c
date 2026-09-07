#include <stdio.h>
#define PI (22/7.0)

int main() {
  float area, r;

  printf("Enter the radius of the circle: ");
  scanf("%f", &r);

  area = PI * r*r;

  printf("The area of the circle is: %.2f sq. units\n", area);
  return 0;
}
