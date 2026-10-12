#include <stdio.h>

int main() {
  int a, b, c;

  printf("enter the first number: ");
  scanf("%d", &a);

  printf("enter the second number: ");
  scanf("%d", &b);

  printf("enter the third number: ");
  scanf("%d", &c);

  printf("\ncalculating using if-else statement...\n");

  if (a > b) {
    if (a > c)
      printf("the largest number is a, or the first number");
    else
      printf("the largest number is c, or the third number");
  } else {
    if (b > c)
      printf("the largest number is b, or the second number");
    else
      printf("the largest number is  c, or the third number");
  }

  printf("\n\ncalculating using nested ternary operator...\n");

  (a > b) ? ((a > c) ? printf("the largest number is a, or the first number")
                     : printf("the largest number is c, or the third number"))
          : ((b > c) ? printf("the largest number is b, or the second number")
                     : printf("the largest number is c, or the third number"));
  
  printf("\n");
  return 0;
}
