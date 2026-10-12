#include <stdio.h>

int main() {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("\n\ncalculating even-odd using if-else statement...\n");

  if (n % 2 == 0)
    printf("Even\n");
  else
    printf("Odd\n");

  printf("\n\ncalculating even-odd using nested ternary operator...\n");
  printf("%s\n", (n % 2 == 0) ? "Even" : "Odd");

  printf("\n\ncalculating positive-negative using if-else statement...\n");

  if (n > 0)
    printf("Positive\n");
  else if (n < 0)
    printf("Negative\n");
  else
    printf("Zero\n");

  printf("\n\ncalculating positive-negative using nested ternary operator...\n");
  printf("%s\n", (n > 0) ? "Positive" : (n < 0) ? "Negative" : "Zero");

  return 0;
}
