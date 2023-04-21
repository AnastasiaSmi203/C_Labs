#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Empty(char* str) {
  if (str[0] == '\n')
    return 1;

  return 0;
}

int Sum(char* str, int* sum) {
  char* word = strtok(str, " ");
  while (word != NULL) {
    char* endptr;
    long num =
        strtol(word, &endptr, 10);
    if (endptr == word || *endptr != '\0' || (num == 0 && !isdigit(word[0]))) {
    } else if (num > 0) {
      *sum += num; 
    }
    word = strtok(NULL, " ");
  }

  if (*sum <= 0) {
    return -1;
  }

  return 0;
}

int main() {
  char str[1000];
  printf("Input: ");
  gets(str);

  int sum = 0;

  if (Empty(str))
    return 0;

  if (Sum(str, &sum) == -1)
    printf(
        "String is empty or doesn't have numbers\n");
  else
    printf("Output: %d\n", sum);

  return 0;
}
