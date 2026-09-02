#include <stdio.h> // # is used for preprocessor direectivesR

int _a; // takes 4 bytes for integer (in general)
        // we cannot use two underscores successively like a__, 
        // with an _

int main() {        // only use int as standard, void is not used anymore
  printf("enter an integer: ");
  scanf("%d", &_a);         // it will only pick the first digit if we use %c and enter 65
  
  char b = _a;      // it will store only 8 bits data of _a
  printf("the corresponding character is %c\n", b);

  short int a2;         // same as short a2
  long int a3;          // same as long a3
  unsigned int c;       // takes only 0 and positive values
  signed int d;         // takes negative, 0 and positive values only
  
  return 0;
}
