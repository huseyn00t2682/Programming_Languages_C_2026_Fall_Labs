/*
 * week4_1_dynamic_array.c
 * Author: HUSEYN TAHIRZADE
 * Student ID: 251ADB188
 * Description:
 *   Demonstrates creation and usage of a dynamic array using malloc.
 *   Allocate memory for n integers, read them from the user,
 *   print their sum and average, and then free the memory.
 *
 *   Output must match the format in the Week 4 instructions exactly
 *   (it is checked by the autograder).
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  int* arr = NULL;

  printf("Enter number of elements: ");
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("Invalid size.\n");
    return 1;
  }
  arr = (int*)malloc(
      n * sizeof(int));  // allocating the memory for n integers using malloc

  if (arr == NULL) {  // checking the allocation success
    printf("Memory allocation failed.\n");
    return 1;
  }

  printf("Enter %d integers: ", n);  // reading n integers into the array
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    if (scanf("%d", &arr[i]) != 1) {
      printf("Invalid input.\n");
      free(arr);
      return 1;
    }
    sum += arr[i];
  }

  double average = (double)sum / n;  // computing the average in floating point

  printf("Sum = %lld\n", sum);  // printing the results in required format
  printf("Average = %.2f\n", average);

  free(arr);  // free allocated memory

  return 0;
}