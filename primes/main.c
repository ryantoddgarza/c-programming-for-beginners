#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int primes[25] = { 0 };
  int primes_index = 0;

  // Interval traversal
  for (int n = 2; n <= 100; n++) {
    int is_prime = true;

    // Test prime traversal
    for (int i = 2; i <= n / 2; ++i) {
      if (n % i == 0) {
        is_prime = false;
        break;
      }
    }

    if (is_prime) {
      primes[primes_index] = n;
      primes_index++;
    }

  }

  // Print traversal
  for (int p = 0; p < primes_index; p++) {
    printf("%d ", primes[p]);
  }

  printf("\n");

  return 0;
}
