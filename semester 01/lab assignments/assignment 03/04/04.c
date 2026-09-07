#include <stdio.h>

int main() {
    int a = 182909;
    printf("the original value of a is: %d\n\n", a);
    
    printf("using += 5 we get: %d\n", (a+=5));
    printf("using -= 5 we get: %d\n", (a-=5));
    printf("using *= 5 we get: %d\n", (a*=5));
    printf("using /= 5 we get: %d\n", (a/=5));
    printf("using %%= 5 we get: %d\n", (a%=5));         // %% prints %
    
    return 0;
}