#include <stdio.h>

int main() {
  int year, flag = 0;

  printf("Enter the year: ");
  scanf("%d", &year);

  if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    flag = 1;

  if (flag == 1) {
    printf("%d is a leap year", year);
  }
  else {
    printf("%d is not a leap year", year);
  }

  printf("\n\n");
  return 0;
}
