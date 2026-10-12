#include <stdio.h>

int main() {
  int n;

  printf("enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("\n");

  int arr[n], loc;

  int len = sizeof(arr) / sizeof(int) - 1;

  
  for (int i = 0; i <= len; i++) {
    printf("enter element %d: ", (i + 1));
    scanf("%d", &arr[i]);
  }

  printf("\n\nPRINTING THE ORIGINAL ARRAY...\n");
  
  for (int i = 0; i <= len; i++) {
    printf("\n%d", arr[i]);
  }

  printf("\n\nenter the position (index) at which the element is to be deleted: ");
  scanf("%d", &loc);

  for (int i = loc; i<=len; i++) {
      arr[i] = arr[i+1];
  }

  printf("\n\nPRINTING THE NEW ARRAY...\n");  
  for (int i = 0; i < len; i++) {
    printf("\n%d", arr[i]);
  }

  printf("\n");
  
  return 0;
}
