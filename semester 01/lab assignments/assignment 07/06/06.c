#include <stdio.h>

int main() {
  int n;

  printf("enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("\n");

  int arr[n], sum;
  double average;

  int len = sizeof(arr) / sizeof(int) - 1;

  for (int i = 0; i <= len; i++) {
    printf("enter element %d: ", (i + 1));
    scanf("%d", &arr[i]);
  }

  printf("\n\nPRINTING THE ORIGINAL ARRAY...\n");

  for (int i = 0; i <= len; i++) {
    printf("\n%d", arr[i]);
  }

  for (int i = 0; i <= len; i++) {
    sum += arr[i];
  }

  average = sum / ((len + 1) * 1.0);

  printf("\n\nthe sum of the array elements is %d and the average of the array "
         "elements is %lf",
         sum, average);

  printf("\n");

  return 0;
}
