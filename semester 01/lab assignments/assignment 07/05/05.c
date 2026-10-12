#include <stdio.h>

int main() {
  int n;

  printf("enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("\n");

  int arr[n], elem, flag = 0, i;

  int len = sizeof(arr) / sizeof(int) - 1;

  for (int i = 0; i <= len; i++) {
    printf("enter element %d: ", (i + 1));
    scanf("%d", &arr[i]);
  }

  printf("\n\nPRINTING THE ORIGINAL ARRAY...\n");

  for (int i = 0; i <= len; i++) {
    printf("\n%d", arr[i]);
  }

  printf("\n\nEnter the element to be searched: ");
  scanf("%d", &elem);

  for (i = 0; i <= len; i++) {
    if (arr[i] == elem) {
      flag = 1;
      break;
    }
    continue;
  }

  if (flag == 1) {
    printf("element found at index %d", i);
  } else {
    printf("element not found");
  }

  printf("\n");

  return 0;
}
