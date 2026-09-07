#include <stdio.h>

int main() {
    // Left Shift operator (<<)
    printf("the number %d left shifted number by 2 is %d", 5, (5<<2));   // 0101 -> 1010 -> 10100
    // works like (number) << (no. of shifts)
    // number multiplied by 2^n

    // Right Shift Operator (>>)
    printf("\nthe number %d right shifted number by 2 is %d\n", 7, (7>>2));   // 0111 -> 0011 -> 0001
    // works like (number) >> (no. of shifts)
    // number divided by 2^n

    return 0;
}
