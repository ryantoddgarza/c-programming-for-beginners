#include <stdio.h>

enum Company {Google, Facebook, Xerox, Yahoo, Ebay, Microsoft};

int main(void) {
  enum Company xerox = Xerox;
  enum Company google = Google;
  enum Company ebay = Ebay;

  printf("the value of `xerox` is: %d\n", xerox);
  printf("the value of `google` is: %d\n", google);
  printf("the value of `ebay` is: %d\n", ebay);

  return 0;
}
