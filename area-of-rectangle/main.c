#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  double width = atof(argv[1]);
  double height = atof(argv[2]);
  double perimeter = 0;
  double area = 0;

  perimeter = 2 * (width + height);
  area = width * height;

  printf("width: %.2f\n", width);
  printf("height: %.2f\n", height);
  printf("perimeter: %.2f\n", perimeter);
  printf("area: %.2f\n", area);

  return 0;
}
