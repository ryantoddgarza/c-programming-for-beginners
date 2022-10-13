#include <stdio.h>
#include <stdlib.h>

#define MAX 250

int main(void) {
  char *buffer = NULL;
  buffer = (char *)malloc(MAX * sizeof(char));

  if (!buffer) {
    exit(EXIT_FAILURE);
  }

  printf("Enter some text: ");
  fgets(buffer, MAX, stdin);

  printf("%s", buffer);

  free(buffer);
  buffer = NULL;

  return 0;
}
