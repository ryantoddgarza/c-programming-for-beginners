#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define SRC_FILE "test.txt"

void convert(char *source);
void print_file(char *source);

int main(void) {
  // Convert the source file
  convert(SRC_FILE);

  // Display the converted contents
  print_file(SRC_FILE);

  return 0;
}

void convert(char *source) {
  const char *TMP_FILE = "tmp.txt";
  FILE *src;
  FILE *tmp;
  int c;

  // Open files
  src = fopen(source, "r");

  if (!src) {
    printf("The file '%s' could not be opened.\n", source);
    exit(EXIT_FAILURE);
  }

  tmp = fopen(TMP_FILE, "w+");

  if (!tmp) {
    printf("The file '%s' could not be opened.\n", TMP_FILE);
    exit(EXIT_FAILURE);
  }

  // Copy converted contents to temporary file
  while ((c = fgetc(src)) != EOF) {
    if (islower(c)) {
      c -= 32;
    }

    fputc(c, tmp);
  }

  // Close files
  fclose(src);
  src = NULL;
  fclose(tmp);
  tmp = NULL;

  // Overwrite source file with temporary file
  if (rename(TMP_FILE, source) != 0) {
    printf("Failed to rename '%s'", TMP_FILE);
    exit(EXIT_FAILURE);
  }
};

void print_file(char *source) {
  int c;

  FILE *src;
  src = fopen(source, "r");

  if (!src) {
    printf("The file %s could not be opened.\n", source);
    exit(EXIT_FAILURE);
  }

  while ((c = fgetc(src)) != EOF) {
    printf("%c", c);
  }

  fclose(src);
  src = NULL;
};
