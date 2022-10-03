#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 10;
  int *pn = NULL;

  pn = &n;

  printf("pointer's address: %p\n", &pn);
  printf("pointer's value: %p\n", pn);
  printf("pointer's dereferenced value: %d\n", *pn);

  return 0;
}
