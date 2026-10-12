#include <stdio.h>

int main() {
  int n;

  printf("enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("\n");

  int arr[n];

  int len = sizeof(arr) / sizeof(int) - 1;

  for (int i = 0; i <= len; i++) {
    printf("enter element %d: ", (i + 1));
    scanf("%d", &arr[i]);
  }

  printf("\n\nPRINTING THE ORIGINAL ARRAY...\n");
  for (int i = 0; i <= len; i++) {
    printf("\n%d", arr[i]);
  }

  // copying to another array
  
  int arr2[n];
  for (int i = 0; i <= len; i++) {
      arr2[i] = arr[i];
  }

  printf("\n\nPRINTING THE COPIED ARRAY...\n");
  for (int i = 0; i <= len; i++) {
    printf("\n%d", arr2[i]);
  }

  
  printf("\n");

  return 0;
}
