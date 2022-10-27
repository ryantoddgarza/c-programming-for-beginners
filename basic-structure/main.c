#include <stdio.h>

struct Employee {
  char name[30];
  char date[15];
  float salary;
};

int main(void) {
  struct Employee e1 = {
      .name = "Ryan",
      .date = "10/27/2022",
      .salary = 120000.0f,
  };

  puts("Employee 1");
  printf("  Name: %s\n", e1.name);
  printf("  Hire date: %s\n", e1.date);
  printf("  Salary: %.2f\n", e1.salary);

  struct Employee e2;

  puts("\nEnter new employee information");
  printf("name: ");
  scanf("%s", e2.name);
  printf("hire date: ");
  scanf("%s", e2.date);
  printf("salary: ");
  scanf("%f", &e2.salary);
  puts("");

  puts("Employee 2");
  printf("  Name: %s\n", e2.name);
  printf("  Hire date: %s\n", e2.date);
  printf("  Salary: %.2f\n", e2.salary);

  return 0;
}
