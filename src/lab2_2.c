#include <stdio.h>

long long f(int n) {
  long long result = 1;
  for (int i = 1; i <= n;
       i++) {  // multiplyer of the numbers for finding the factorial
    result *= i;
  }
  return result;
}

int main(void) {
  int n;

  printf("enter n: ");
  if (scanf("%d", &n) != 1 || n < 0) {
    printf("error: n can be 0 or greater\n");  // again we re checking our
                                               // requirement if done by user or
                                               // not
    return 1;
  }

  long long result = f(n);
  printf("factorial of %d is %lld\n", n, result);

  return 0;
}