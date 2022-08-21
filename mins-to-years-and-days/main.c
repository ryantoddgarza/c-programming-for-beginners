#include <stdio.h>

int main(void) {
  double MINS_IN_DAY = 60 * 24;
  double MINS_IN_YEAR = MINS_IN_DAY * 365;
  int mins = 0;
  double years = 0;
  double days = 0;

  printf("Enter the number of minutes: ");
  scanf("%d", &mins);

  years = mins / MINS_IN_YEAR;
  days = mins / MINS_IN_DAY;

  printf("%d minutes is appoximately\n", mins);
  printf("years: %lf\n", years);
  printf("days: %lf\n", days);

  return 0;
}
