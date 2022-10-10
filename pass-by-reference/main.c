#include <stdio.h>

void square(int *n);

int main(void) {
  int number = 9;

  printf("The square of %d ", number);
  square(&number);
  printf("is %d\n", number);

  return 0;
}

void square(int *n) { *n *= *n; };
