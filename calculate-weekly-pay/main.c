#include <stdio.h>

#define BASE_RATE 12.00
#define OVERTIME_RATE 1.5 * BASE_RATE
#define MAX_BASE_HRS 40
#define TAX_RATE_LO 0.15
#define TAX_RATE_MD 0.20
#define TAX_RATE_HI 0.25

int main(int argc, char* argv[]) {
  float hours = 0;
  double gross_pay = 0;
  double taxes = 0;
  double net_pay = 0;

  printf("Enter the number of hours worked this week: ");
  scanf("%f", &hours);


  // Calculate `gross_pay`
  if (hours > MAX_BASE_HRS) {
    gross_pay = MAX_BASE_HRS * BASE_RATE;
    gross_pay += (hours - MAX_BASE_HRS) * OVERTIME_RATE;
  } else {
    gross_pay = hours * BASE_RATE;
  }

  // Calculate `taxes`
  if (gross_pay > 450) {
    taxes = 300 * TAX_RATE_LO;
    taxes += 150 * TAX_RATE_MD;
    taxes += (gross_pay - 450) * TAX_RATE_HI;
  } else if (gross_pay <= 450 && gross_pay > 300) {
    taxes = 300 * TAX_RATE_LO;
    taxes += (gross_pay - 300) * TAX_RATE_MD;
  } else {
    taxes = gross_pay * TAX_RATE_LO;
  }

  // Calulate `net_pay`
  net_pay = gross_pay - taxes;

  // Display output
  printf("Gross pay: $%.2lf\n", gross_pay);
  printf("Taxes: $%.2lf\n", taxes);
  printf("Net pay: $%.2lf\n", net_pay);

  return 0;
}
