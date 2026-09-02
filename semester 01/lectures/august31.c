#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *name = malloc(1000*sizeof(char));
    char *newName = malloc(1000*sizeof(char));
        
    printf("\n\nEnter 1st string: ");
    gets(name);

    // EXTRA: gets is deprecated, cause it doesnt know the size of the string to be entered and thus is unsafe
    //        we use fgets(destination, size, source) instead

    printf("Enter 2nd string: ");
    fgets(newName, sizeof(newName), stdin);

    printf("\n The entered strings when concatenated are: ");
    puts(strcat(name, newName));

    free(name);
    free(newName);
    
    return 0;
}
