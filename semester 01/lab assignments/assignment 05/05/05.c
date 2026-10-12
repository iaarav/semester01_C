#include <stdio.h>

int main() {
    double hardness, carbon, tensile;
    int condition1, condition2, condition3, grade;

    printf("enter hardness: ");
    scanf("%lf", &hardness);

    printf("enter carbon content: ");
    scanf("%lf", &carbon);

    printf("enter tensile strength: ");
    scanf("%lf", &tensile);

    condition1 = hardness > 50;
    condition2 = carbon < 0.7;
    condition3 = tensile > 5600;

    if (condition1 && condition2 && condition3)
        grade = 10;
    else if (condition1 && condition2)
        grade = 9;
    else if (condition2 && condition3)
        grade = 8;
    else if (condition1 && condition3)
        grade = 7;
    else if (condition1 || condition2 || condition3)
        grade = 6;
    else
        grade = 5;

    printf("\ngrade using nested if-else: %d\n", grade);

    if (condition1) {
        if (condition2) {
            if (condition3)
                grade = 10;
            else
                grade = 9;
        }
        else if (condition3)
            grade = 7;
        else
            grade = 6;
    }
    else if (condition2) {
        if (condition3)
            grade = 8;
        else
            grade = 6;
    }
    else if (condition3)
        grade = 6;
    else
        grade = 5;

    printf("grade using ladder if: %d\n", grade);

    if (condition1 && condition2 && condition3)
        grade = 10;
    else if (condition1 && condition2)
        grade = 9;
    else if (condition2 && condition3)
        grade = 8;
    else if (condition1 && condition3)
        grade = 7;
    else if (condition1 || condition2 || condition3)
        grade = 6;
    else
        grade = 5;

    printf("grade using else-if: %d\n", grade);

    return 0;
}
