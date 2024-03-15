#include <stdio.h>

int factorial(int n) {

  if (n < 0) {
    printf("Factorial is not defined for negative numbers.\n");
    return -1;
  }

  int result = 1;

  for (int i = 1; i <= n; i++) {
    result *= i;
  }

  return result;
}

int main() {
  int number;

  printf("Enter a non-negative number: ");
  scanf("%d", &number);

  int fact = factorial(number);

  if (fact != -1) {
    printf("The factorial of %d is: %d\n", number, fact);
  }

  return 0;
}
