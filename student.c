#include "student.h"
#include <stdio.h>

void addStudent(student_t stud) { printf("add student called"); }

student_t *viewStudents(void) {
  printf("view students called");
  student_t *s;
  return s;
}

student_t findStudent(student_t stud) {
  printf("find students called");
  student_t s;
  return s;
}
void deleteStudent(student_t stud) { printf("delete students called"); }
void load(void) { printf("load called"); }
void save(void) { printf("save student called"); }