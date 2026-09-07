#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, temp, revNum = 0, counter = 0;

  printf("Enter a 5 digit number: ");
  scanf("%d", &num);

  temp = num;

  while (temp > 0) {
    revNum = (revNum * 10) + (temp % 10);
    temp /= 10;
    counter++;
  }

  if (counter != 5) {
    printf("invalid input\n");
    return 0;
  }

  printf("the reversed number is: %d\n", revNum);
}
