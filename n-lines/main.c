#include <stdio.h>
#include <stdlib.h>

#define SRC_FILE "test.txt"

int n_lines(char *filename);

int main(void) {
  printf("lines: %d\n", n_lines(SRC_FILE));

  return 0;
}

int n_lines(char *filename) {
  FILE *fp = fopen(filename, "r");
  int c;
  int lines = 0;

  if (!fp) {
    printf("The file %s could not be opened.", filename);
    exit(EXIT_FAILURE);
  }

  while ((c = fgetc(fp)) != EOF) {
    if (c == '\n') {
      lines++;
    }
  }

  fclose(fp);
  fp = NULL;

  return lines;
};
