#include <stdio.h>

int main() {
  printf("the size of char is: %d bytes\n", (int)sizeof(char));
  printf("the size of int is: %d bytes\n", (int)sizeof(int));
  printf("the size of long int is: %d bytes\n", (int)sizeof(long int));
  printf("the size of float is: %d bytes\n", (int)sizeof(float));
  printf("the size of double is: %d bytes\n", (int)sizeof(double));
  return 0;
}
