#include <stdio.h>

int main() {
  int m, n;

  printf(
      "\nWARNING: THE NUMBER OF ROWS MUST BE EQUAL TO THE NUMBER OF COLUMNS\n\n");
  printf("enter the number of rows in the array: ");
  scanf("%d", &m);
  printf("enter the number of columns in the array: ");
  scanf("%d", &n);
  printf("\n");

  if (m != n) {
    printf("invalid input");
    return 1;
  }

  int arr[m][n];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("enter element at position (%d,%d): ", (i + 1), (j + 1));
      scanf("%d", &arr[i][j]);
    }
  }

  printf("\n\nPRINTING THE ORIGINAL ARRAY...\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++)
      printf(" %d", arr[i][j]);

    printf("\n");
  }

  int transpose[m][n], result[m][n];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++)
      transpose[i][j] = arr[j][i];
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++)
      result[i][j] = arr[i][j] + transpose[i][j];
  }

  printf("\n\nPRINTING THE NEW ARRAY...\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}
