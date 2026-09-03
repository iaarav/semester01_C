#include <stdio.h>

int main() {
    // Bitwise OR operator (|)
    printf("\nthe bitwise OR addition of 5 and 3 is %d", (5|3));
    // 5 - 0101 and 3 = 0011 ---> 0111 (7)

    // Bitwise XOR operator (^)
    printf("\nthe bitwise XOR addition of 5 and 3 is %d", (5^3));
    // 5 - 0101 and 3 - 0011 -----> 0110

    // Left Shift operator (<<)
    printf("\n\n%d left shifted number by 2 is %d", 4, (4<<2));   // 0100 -> 0010 -> 0001
    // works like (number) << (no. of shifts)
    // number multiplied by 2^n

    // Right Shift Operator (>>)
    printf("\n%d right shifted number by 2 is %d\n", 4, (4>>2));   // 0100 -> 0010 -> 0001 
    // works like (number) >> (no. of shifts)
    // number divided by 2^n

    int i = 5;
    i-=1;

    printf("\n%d %d\n",i<<=3, i>>=2);       // this is wrong because there is a confusion in the sequence of these operations
    
    return 0;
}
