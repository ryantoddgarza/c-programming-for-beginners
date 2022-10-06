#include <stdio.h>

int strlength(const char *str);

int main(void) {
  char *string = "foobar";

  printf("%d\n", strlength(string));

  return 0;
}

int strlength(const char *str) {
  const char *end = str;

  while (*end) {
    end++;
  }

  return end - str;
}
