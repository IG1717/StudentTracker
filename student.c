#include "student.h"
#include <stdio.h>

#define MAX_STUDENTS 100
static student_t students[MAX_STUDENTS];
static int student_count = 0;

void addStudent(student_t stud) { 
  if(student_count < MAX_STUDENTS) {
    students[student_count] = stud;
    student_count++;
    printf("SUCCESS! STUDENT ADDED \n");
  } else {
    printf("[ERROR] TOO MANY STUDENTS! \n");
  }

}

student_t *viewStudents(void) {
  for(int i=0; i<student_count; i++) {
    printf("VALUES FOR STUDENT: %i \n", i);
    printf("ID: %i \n", students[i].id);
    printf("NAME: %s \n", students[i].name);
    printf("GPA: %f \n", students[i].gpa);
  }
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