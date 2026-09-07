#include <stdio.h>

int main() {
  int c, d, temp;

  printf("enter a number in location c: ");
  scanf("%d", &c);

  printf("enter a number in location d: ");
  scanf("%d", &d);

  printf("\n old c: %d \n old d: %d", c, d);

  temp = c;
  c = d;
  d = temp;

  printf("\n\n new c: %d \n new d: %d\n", c, d);
  return 0;
}
