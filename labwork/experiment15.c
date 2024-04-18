#include <stdio.h>

// Function to find factorial using recursion
int factorial_recursive(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * factorial_recursive(n - 1);
  }
}

// Function to find factorial using iteration (non-recursive)
int factorial_non_recursive(int n) {
  int factorial = 1;
  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }
  return factorial;
}

int main() {
  int num;

  printf("Enter a natural number: ");
  scanf("%d", &num);

  if (num < 0) {
    printf("Factorial is not defined for negative numbers.\n");
  } else {
    int factorial_recursive_result = factorial_recursive(num);
    int factorial_non_recursive_result = factorial_non_recursive(num);

    printf("Factorial of %d using recursion: %d\n", num, factorial_recursive_result);
    printf("Factorial of %d using non-recursion: %d\n", num, factorial_non_recursive_result);
  }

  return 0;
}
