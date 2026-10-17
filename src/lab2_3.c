#include <stdio.h>

int is_prime(int n) {
  if (n < 2) return 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main(void) {
  int n;

  printf("enter n: ");
  if (scanf("%d", &n) != 1 || n < 2) {
    printf("error: n can be at least 2\n");  // again we re checking required
                                             // number
    return 1;
  }

  printf("primes up to %d: ", n);
  for (int i = 2; i <= n; i++) {  // loop till finding our result
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}