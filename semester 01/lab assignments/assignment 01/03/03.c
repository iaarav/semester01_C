#include <stdio.h>

int main() {
  int a, b, result;

  printf("\nEnter the 1st number: ");
  scanf("%d", &a);

  printf("Enter the 2nd number: ");
  scanf("%d", &b);

  printf("\nThe sum of the entered two numbers is: %d\n", (a + b));
  printf("The absolute difference of the entered two numbers (greater - "
         "smaller) is: %d\n",
         (a > b ? (a - b) : (b - a)));

  printf("The product of the entered two numbers is: %d\n", (a * b));

  printf(
      "The qoutient of the entered two numbers (greater / smaller) is: %f\n",
      (a > b ? (a / (b * 1.0)) : (b / (a * 1.0)) ));

  return 0;
}
