#include <stdio.h>

int main() {
  char str1[50], str2[50], concatenated[100];
  int i, j = 0;

  printf("Enter the first string: ");
  fgets(str1,50,stdin);
  printf("Enter the second string: ");
  fgets(str2,50,stdin);

  for (i = 0; str1[i] != '\0'; i++) {
    if(str1[i] == '\n'){
        continue;
    }
    concatenated[i] = str1[i];
    j++;
  }

  for (i = 0; str2[i] != '\0'; i++) {
    concatenated[j++] = str2[i];
  }

  concatenated[j] = '\0';

  printf("Concatenated string:%s", concatenated);
  int size = sizeof(concatenated)/sizeof(concatenated[0]);
  printf("%d",size);

  return 0;
}
