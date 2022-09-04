#include <stdio.h>

int _gcd(int a, int b);
float _abs(float num);
float _sqrt(float num);

int main(void) {
  printf("The greatest common divisor of 102 and 405 is: %d\n", _gcd(102, 405));
  printf("The greatest common divisor of 24 and 0 is: %d\n", _gcd(24, 0));
  printf("The greatest common divisor of 35 and -150 is: %d\n\n",
         _gcd(35, -150));

  printf("The abolute value of -15.5 is: %.2f\n", _abs(-15.5f));
  printf("The abolute value of 20 is: %.2f\n", _abs(20));
  printf("The abolute value of -5 is: %.2f\n\n", _abs(-5));

  printf("The square root of -3.0 is: %.2f\n", _sqrt(-3.0));
  printf("The square root of 16.0 is: %.2f\n", _sqrt(16.0));
  printf("The square root of 25.0 is: %.2f\n", _sqrt(25.0));
  printf("The square root of 9.0 is: %.2f\n", _sqrt(9.0));
  printf("The square root of 225.0 is: %.2f\n", _sqrt(225.0));

  return 0;
}

float _abs(float x) {
  if (x < 0) {
    x = x * (-1);
  }

  return x;
}

int _gcd(int a, int b) {
  int result;

  a = _abs(a);
  b = _abs(b);

  if (a == 0) {
    return b;
  }

  if (b == 0) {
    return a;
  }

  for (int n = 1; n <= a && n <= b; n++) {
    if (a % n == 0 && b % n == 0) {
      result = n;
    }
  }

  return result;
}

float _sqrt(float x) {
  const float epsilon = .00001;
  float guess = 1.0;

  if (x < 0) {
    printf("The square root of a negative value is a nonreal number.\n");
    return -1;
  }

  while (_abs(guess * guess - x) >= epsilon) {
    guess = (x / guess + guess) / 2.0;
  }

  return guess;
}
