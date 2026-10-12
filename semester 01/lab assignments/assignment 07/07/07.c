#include <stdio.h>

int main() {
  int n;

  printf("enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("\n");

  int arr[n], max, min;

  int len = sizeof(arr) / sizeof(int) - 1;

  for (int i = 0; i <= len; i++) {
    printf("enter element %d: ", (i + 1));
    scanf("%d", &arr[i]);
  }

  printf("\n\nPRINTING THE ORIGINAL ARRAY...\n");

  for (int i = 0; i <= len; i++) {
    printf("\n%d", arr[i]);
  }

  max = arr[0];
  min = arr[0];

  for (int i = 1; i <= len; i++) {
    if (arr[i] > max)
      max = arr[i];

    if (arr[i] < min)
      min = arr[i];
  }

  printf("\n\nsmallest element: %d \nlargest element: %d", min, max);

  printf("\n");

  return 0;
}
