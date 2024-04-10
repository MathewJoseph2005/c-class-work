#include <stdio.h>

int main() {
  char word[50];
  int i, length = 0, isPalindrome = 1;

  printf("Enter a word: ");
  scanf("%s", word);

  while (word[length] != '\0') {
    length++;
  }

  for (i = 0; i < length / 2; i++) {
    if (word[i] != word[length - i - 1]) {
      isPalindrome = 0;
      break;
    }
  }

  if (isPalindrome) {
    printf("%s is a palindrome.\n", word);
  } else {
    printf("%s is not a palindrome.\n", word);
  }

  return 0;
}
