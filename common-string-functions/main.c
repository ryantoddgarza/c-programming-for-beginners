#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 25

void str_rev();
void str_sort();

int main(void) {

  str_rev();
  str_sort();

  return 0;
}

void str_rev() {
  puts("----------------------------------------");
  puts("REVERSE STRING CHARACTERS");
  puts("----------------------------------------\n");

  char str[MAX_STR_LEN] = "";
  int len = 0;

  printf("Input string to be reversed: ");
  scanf("%s", str);
  puts("");

  len = strlen(str);

  puts("Reversed string:");

  for (int i = len; i >= 0; i--) {
    printf("%c", str[i]);
  }

  puts("\n");
};

void str_sort() {
  puts("----------------------------------------");
  puts("SORT ARRAY STRINGS USING BUBBLE SORT");
  puts("----------------------------------------\n");

  int n_str = 0;
  char strs[20][MAX_STR_LEN];
  char tmp[MAX_STR_LEN];

  printf("Input number of strings to sort: ");
  scanf("%d", &n_str);
  puts("");

  printf("Input strings (%d):\n", n_str);

  for (int i = 0; i < n_str; i++) {
    scanf("%s", strs[i]);
  }

  puts("");

  // Bubble sort
  for (int i = 1; i < n_str; i++) {
    for (int j = 0; j < n_str - i; j++) {
      if (strcmp(strs[j], strs[j + 1]) > 0) {
        // Swap
        strcpy(tmp, strs[j]);
        strcpy(strs[j], strs[j + 1]);
        strcpy(strs[j + 1], tmp);
      }
    }
  }

  puts("Sorted strings:");
  for (int i = 0; i < n_str; i++) {
    printf("%s\n", strs[i]);
  }
};
