#include <stdio.h>

int main() {
  char ch;

  for (int i = 0; i < 4; i++) {

    printf("enter a character: ");
    scanf(" %c", &ch);                  // " %c" space to ignore the input buffer

    if (ch >= 'A' && ch <= 'Z')
      printf("%c is a capital letter", ch);

    else if (ch >= 'a' && ch <= 'z')
      printf("%c is a small letter", ch);

    else if (ch >= '0' && ch <= '9')
      printf("%c is a number", ch);

    else
      printf("%c is a special symbol", ch);

    printf("\n\n");
  }

  return 0;
}
