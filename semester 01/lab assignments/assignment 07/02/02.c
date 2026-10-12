#include <stdio.h>

int main() {
  int n;

  printf("enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("\n");

  int arr[n + 1], loc, elem;

  int len = sizeof(arr) / sizeof(int) - 1;

  
  for (int i = 0; i < len; i++) {
    printf("enter element %d: ", (i + 1));
    scanf("%d", &arr[i]);
  }

  printf("\n\nPRINTING THE ORIGINAL ARRAY...\n");
  
  for (int i = 0; i < len; i++) {
    printf("\n%d", arr[i]);
  }

  printf("\n\n\nEnter the location (index) at which the element is to be inserted: ");
  scanf("%d", &loc);

  printf("Enter the element to be inserted at %d: ", loc);
  scanf("%d", &elem);

  for (int i = len; i >= loc; i--) {
    arr[i] = arr[i - 1];
  }

  arr[loc] = elem;

  printf("\n\nPRINTING THE NEW ARRAY...\n");
  
  for (int i = 0; i <= len; i++) {
    printf("\n%d", arr[i]);
  }

  printf("\n");
  
  return 0;
}
