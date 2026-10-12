#include <stdio.h>

int main() {
  int n;

  printf("enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("\n");

  int arr[n], temp;

  int len = sizeof(arr) / sizeof(int) - 1;

  for (int i = 0; i <= len; i++) {
    printf("enter element %d: ", (i + 1));
    scanf("%d", &arr[i]);
  }

  printf("\n\nPRINTING THE ORIGINAL ARRAY...\n");
  
  for (int i = 0; i <= len; i++) {
    printf("\n%d", arr[i]);
  }

  for (int i = 0; i <=(len / 2); i++) {
    temp = arr[i];
    arr[i] = arr[len - i];
    arr[len - i] = temp;
  }
  printf("\n\nPRINTING THE REVERSED ARRAY...\n");

  for (int i = 0; i <= len; i++) {
    printf("\n%d", arr[i]);
  }

  printf("\n");

  return 0;
}
