/*
 * week4_2_struct_student.c
 * Author: HUSEYN TAHIRZADE
 * Student ID: 251ADB188
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Define a 'Student' struct with name, id and grade, create two
 *   instances with the values from the instructions, and print them.
 *
 *   This program reads no input. Output must match the format in the
 *   Week 4 instructions exactly (it is checked by the autograder).
 */

#include <stdio.h>
#include <string.h>

struct Student {  // defining the Student struct
  char name[50];
  int id;
  float grade;
};

int main(void) {
  struct Student s1;  // declaring two student variables
  struct Student s2;

  strcpy(s1.name, "Alice Johnson");  // assigning the values to student 1
  s1.id = 1001;
  s1.grade = 9.1f;

  strcpy(s2.name, "Bob Smith");  // assigning the values to student 2
  s2.id = 1002;
  s2.grade = 8.7f;
  printf("Student 1: %s, ID: %d, Grade: %.1f\n", s1.name, s1.id,
         s1.grade);  // printing the students in exact required format
  printf("Student 2: %s, ID: %d, Grade: %.1f\n", s2.name, s2.id, s2.grade);

  return 0;
}