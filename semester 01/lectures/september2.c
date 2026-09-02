#include <stdio.h>

int main() {
    // anything apart from 0 will be treated as true

    if(-18921){
        printf("\n PASS");
    }else{
        printf("\nFAIL");
    }
    
    if(0){
        printf("\n PASS");
    }else{
        printf("\nFAIL");
    }
    return 0;
}