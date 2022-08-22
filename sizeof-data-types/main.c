#include <stdio.h>

int main(void) {
  printf("Variables of type int occupy %zd bytes\n", sizeof(int));
  printf("Variables of type char occupy %zd bytes\n", sizeof(char));
  printf("Variables of type long occupy %zd bytes\n", sizeof(long));
  printf("Variables of type long long occupy %zd bytes\n", sizeof(long long));
  printf("Variables of type double occupy %zd bytes\n", sizeof(double));
  printf("Variables of type long double occupy %zd bytes\n", sizeof(long double));

  return 0;
}
