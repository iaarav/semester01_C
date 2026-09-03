#include <stdio.h>

int main() {
  // anything apart from 0 will be treated as true

  if (-18921) {
    printf("\nPASS");
  } else {
    printf("\nFAIL");
  }

  if (0) {
    printf("\nPASS");
  } else {
    printf("\nFAIL");
  }

  // bitwise AND operator (&)

  printf("\n\nthe bitwise sum of 5 and 3 is %d\n", (5 & 3));    

  // performs bitwise AND operation --> 5 is 0101 and 3 is 0011 -> 0001 or 1
  // number of digitys must be equal, or performs padding using 0 on the LHS in the lesser digit number.
  
  return 0;
}
