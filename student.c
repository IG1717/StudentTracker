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

void viewStudents(void) {
  for(int i=0; i<student_count; i++) {
    printf("VALUES FOR STUDENT: %i \n", i);
    printStudentInfo(students[i]);
    printf("------------------------------------");
  }
}

student_t findStudent(int id) {
  for(int i=0; i<student_count; i++) {
    student_t curr_student = students[i];
    if(curr_student.id == id) {
      printStudentInfo(curr_student);
      return curr_student;
    } else {
      printf("[ERROR] NO STUDENT WITH GIVEN ID FOUND");
    }
  }
}

void printStudentInfo(student_t stud) {
    printf("ID: %i \n", stud.id);
    printf("NAME: %s \n", stud.name);
    printf("GPA: %f \n", stud.gpa);
}


void deleteStudent(student_t stud) { printf("delete students called"); }
void load(void) { printf("load called"); }
void save(void) { printf("save student called"); }