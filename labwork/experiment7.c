#include <stdio.h>

int main() {
  int n, i, sum = 0;
  float average;

  printf("Enter the number of integers: ");
  scanf("%d", &n);

  int numbers[n];

  printf("Enter %d integers:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
    sum += numbers[i];
  }

  average = (float)sum / n;

  printf("The sum of the numbers is: %d\n", sum);
  printf("The average of the numbers is: %.2f\n", average);

  return 0;
}
