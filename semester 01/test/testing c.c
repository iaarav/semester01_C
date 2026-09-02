#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("hello world\n");
  int* h = malloc(4);
  scanf("\n%d", h);
  printf("%d",*h);

  free(h);
  return 0;
}
