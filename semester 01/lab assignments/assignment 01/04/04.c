#include <stdio.h>

int main() {
  float gross_salary, basic, da, ta;

  printf("Enter the basic salary of the variable: ");
  scanf("%f", &basic);
  
  da = 0.10 * basic;
  ta = 0.12 * basic;

  gross_salary = basic + da + ta;

  printf("The gross salary of the person is: %.2f\n", gross_salary);
  
  return 0;
}
