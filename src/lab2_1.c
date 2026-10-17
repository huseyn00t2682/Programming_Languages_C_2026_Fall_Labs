#include <stdio.h>

int sum_to_n(int n) {
  int s = 0;
  for (int i = 1; i <= n; i++) {
    s += i;
  }
  return s;
}

int main(void) {
  int n;

  printf("enter a positive integer n: ");  // checking if user enters a valid
                                           // integer as we require or not
  if (scanf("%d", &n) != 1 || n < 1) {
    printf("error: n can be at least 1\n");
    return 1;
  }

  int result = sum_to_n(n);
  printf("sum is from 1 to %d is %d\n", n, result);  // our final result

  return 0;
}