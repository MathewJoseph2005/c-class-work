#include <stdio.h>

int main() {
  int n, i, target, found = 0;

  printf("Enter the number of integers: ");
  scanf("%d", &n);

  int numbers[n];

  printf("Enter %d integers:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
  }

  printf("Enter the element to search: ");
  scanf("%d", &target);

  for (i = 0; i < n; i++) {
    if (numbers[i] == target) {
      found = 1;
      break;
    }
  }

  if (found) {
    printf("The element %d is found at index %d\n", target, i);
  } else {
    printf("The element %d is not found in the list\n", target);
  }

  return 0;
}
 