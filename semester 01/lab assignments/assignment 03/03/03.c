#include <stdio.h>

int main() {
    printf("hello world\n");
    printf("\nhello\tworld");       // '/t' horizontal tab
    printf("\nABC\bD\n");       // '/b' backspace
    printf("it's c\n");         // '/n' next line
    printf("backslash: \\\n");  // to type '/' we need to type '//'
    printf("\"hello\"\n");  
    printf("Hello is mean\rworld\n");       // '\r' moves cursor back to the start.
    printf("\a");           // makes alert sound

    return 0;
}