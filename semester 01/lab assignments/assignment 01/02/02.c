#include <stdio.h>

int main() {
  int x;
  float y;
  char z;

  printf("Enter an integer: "); // printf requires value
  scanf("%d", &x);              // dont forget scanf requires pointer

  printf("Enter a decimal point number: ");
  scanf("%f", &y);

  printf("Enter a character: ");
  scanf(" %c", &z);         // need to do " %c" cause of input buffer of "\n"
                            // the extra space means "PICK THE NEXT CHARACTER AFTER WHITESPACE"
                            // the extra space can also be put in with %d, %f but they automatically skip the whtiespace

  printf("\nThe entered numbers are: %d, %f, %c\n", x, y, z);

  return 0;
}
