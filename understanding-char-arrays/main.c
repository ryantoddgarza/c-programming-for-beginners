#include <stdbool.h>
#include <stdio.h>

#define MAX_LEN 25

int str_len(const char str[]);
void str_cat(char result[], const char str1[], const char str2[]);
bool str_cmp(const char str1[], const char str2[]);

int main(void) {
  char str1[MAX_LEN] = "foo";
  char str2[MAX_LEN] = "bar";
  char str3[MAX_LEN] = "";

  printf("length of string 1: %d\n", str_len(str1));
  printf("length of string 2: %d\n", str_len(str2));

  printf("concat string 1 & 2: ");
  str_cat(str3, str1, str2);

  printf("string 1 eq string 2: %s\n", str_cmp(str1, str2) ? "true" : "false");

  return 0;
}

int str_len(const char str[]) {
  int n = 0;

  while (str[n] != '\0') {
    n++;
  }

  return n;
}

void str_cat(char result[], const char str1[], const char str2[]) {
  int i = 0;
  int j = 0;

  for (i = 0; str1[i] != '\0'; i++) {
    result[i] = str1[i];
  }

  for (j = 0; str2[j] != '\0'; j++) {
    result[i + j] = str2[j];
  }

  result[i + j] = '\0';

  printf("%s\n", result);
};

bool str_cmp(const char str1[], const char str2[]) {
  int i = 0;
  bool is_equal = false;

  while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
    i++;
  }

  if (str1[i] == '\0' && str2[i] == '\0') {
    is_equal = true;
  }

  return is_equal;
};
