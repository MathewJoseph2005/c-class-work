#include <stdio.h>

int main() {
  char str[50];
  int i, vowels = 0, consonants = 0, spaces = 0;

  printf("Enter a string: ");
  fgets(str,50,stdin);

  for (i = 0; str[i] != '\n'; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
      vowels++;
    } else if (str[i] == ' ') {
      spaces++;
    } else {
      consonants++;
    }
  }

  printf("Vowels: %d\nConsonants: %d\nSpaces: %d\n", vowels, consonants, spaces);

  return 0;
}
