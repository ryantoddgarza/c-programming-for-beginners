#include <stdio.h>

int main(void) {
  const int N_MONTHS = 12;
  const int N_YEARS = 5;

  float rain[N_YEARS][N_MONTHS] = {
    {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6}, // 2011
    {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3}, // 2012
    {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4}, // 2013
    {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2}, // 2014
    {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}, // 2015
  };

  char *years[N_YEARS] = {"2011", "2012", "2013", "2014", "2015"};
  char *months[N_MONTHS] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  float yearly_sum = 0;
  float yearly_avg = 0;
  float monthly_sum[N_MONTHS] = { 0 };
  float monthly_avg[N_MONTHS] = { 0 };

  printf("YEAR\tTOTAL\n");

  // Iterate over outer dimension (years)
  for (int year = 0; year < N_YEARS; year++) {
    float yearly_sum = 0;

    // Iterate over inner dimension (months)
    for (int month = 0; month < N_MONTHS; month++) {
      yearly_sum += rain[year][month];
      monthly_sum[month] += rain[year][month];
    }

    // Calculate and output yearly total
    yearly_sum += yearly_sum;
    printf("%s\t%.1f\n", years[year], yearly_sum);
  }

  // Calculate and output yearly average
  yearly_avg = yearly_sum / N_YEARS;
  printf("\nYEARLY AVG: %.1f\n", yearly_avg);

  printf("\nMONTH\tAVG\n");

  // Calculate and output monthly average
  for (int m = 0; m < N_MONTHS; m++) {
    monthly_avg[m] = monthly_sum[m] / N_YEARS;
    printf("%s\t%.2f\n", months[m], monthly_avg[m]);
  }

  return 0;
}
