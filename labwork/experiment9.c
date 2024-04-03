#include <stdio.h>

int main() {
  int n, i, j;

  printf("Enter the number of integers: ");
  scanf("%d", &n);

  int numbers[n];

  printf("Enter %d integers:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
  }

  // Bubble sort implementation within main function
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (numbers[j] > numbers[j + 1]) {
        int temp = numbers[j]; // Use a temporary variable for swap
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp;
      }
    }
  }

  printf("The sorted array is: ");
  for (i = 0; i < n; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  return 0;
}
