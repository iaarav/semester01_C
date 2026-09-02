#include <math.h>
#include <stdio.h>

int main() {
  printf("sin(22/7) = %lf", sin(M_PI));       // works in radians
  printf("\ncos (100) = %lf", cos(100));        // works in radians
  
  printf("\n\nlog(100, e) = %lf", log(100));      // log() --> natural log
  printf("\nlog(100, 10) = %lf", log10(100));      // log10() --> log with base 10
  printf("\nlog(100, 5) = %lf", (log(100)/log(5)));      // method to calculate log base n
  
  printf("\n\npow(100,10) = %lf", pow(100,10));   // log (base, power)
  printf("\nsqrt(100) = %lf\n", sqrt(100)); 

  return 0;
}