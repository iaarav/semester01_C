#include <stdio.h>

int main() {
  int a;
  printf("enter a number: ");
  scanf("%d", &a);

  printf(a % 2 == 0 ? "even number\n" : "odd number\n");

  return 0;
}
