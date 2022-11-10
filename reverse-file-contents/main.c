#include <stdio.h>
#include <stdlib.h>

#define SRC_FILE "test.txt"

void reverse_content(char *file);

int main(void) {
  reverse_content(SRC_FILE);

  return 0;
}

void reverse_content(char *filename) {
  FILE *fp = NULL;
  int len = 0;

  // Open file
  fp = fopen(filename, "r");

  if (!fp) {
    printf("The file %s could not be opened.", filename);
    exit(EXIT_FAILURE);
  }

  // Get length
  fseek(fp, 0, SEEK_END);
  len = ftell(fp);

  // Print in reverse
  for (int i = 1; i < len;) {
    i++;
    fseek(fp, -i, SEEK_END);
    printf("%c", fgetc(fp));
  }

  puts("");

  // Close file
  fclose(fp);
  fp = NULL;
};
