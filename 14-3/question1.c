// fibanocci series up to a limit(exculding it)
#include <stdio.h>

void fibonacci(int limit) {
  int t1 = 0, t2 = 1, nextTerm;
  do {
    printf("%d ", t1);
    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
  } while (t1 < limit);
}

int main() {
  int limit;

  printf("Enter the limit: ");
  scanf("%d", &limit);

  fibonacci(limit);

  return 0;
}
