#include <stdio.h>

int main() {
    printf("hello world\n");
    printf("\nhello\tworld");       // '/t' horizontal tab
    printf("\nABC\bD\n");       // '/b' backspace
    printf("It's C\n");         // '/n' next line
    printf("Backslash: \\\n");  // to type '/' we need to type '//'
    printf("\"Hello\"\n");  
    printf("Hello\rWorld\n");
    printf("\a");

    return 0;
}