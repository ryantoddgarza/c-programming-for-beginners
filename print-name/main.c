#include <stdio.h>

int main(void) {
  char str[100];

  printf("Enter your name: ");
  scanf("%s", str);

  printf("Hello %s\n", str);
  return 0;
}
