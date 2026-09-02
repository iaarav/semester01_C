#include <stdio.h>

int main(){
    unsigned char c2;     // the classic char -- range 0 to 255 (1 byte)
    signed char c1;       // special char used to store small integers, range -128 to 127, NOT RELATED TO ASCII VALUES

    int a = 10;
    float b = 2.4;
    char c = 67;

    printf("%d %f %c",a,b,c);
    printf("\n%d %f %c", 10 , 2.4 , 67);        // implicit tyepcasting wont work here

}
