#include "student.h"
#include <stdio.h>
#include <string.h>

int main(void) {
  while (1) {
    printf("1. Add student\n 2. View Students\n 3. Find student\n 4. Delete "
           "Student\n 5.Save\n 6. Load \n 7. Exit\n");

    int choice;
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      /* code */
      printf("Enter student ID: ");
      int id;
      scanf("%d", &id);
      printf("Enter student Name: ");
      char name[50];
      scanf("%s", name);
      printf("Enter student GPA: ");
      float gpa;
      scanf("%f", &gpa);
      student_t stud = {id, "", gpa};
      strcpy(stud.name, name);
      addStudent(stud);
      break;
    case 2:
      /* code */
      viewStudents();
      break;
    case 3:
      /* code */
      //student_t s;

      printf("Enter student ID: ");
      int id_to_find;
      scanf("%d", &id_to_find);
      findStudent(id_to_find);
      break;
    case 4:
      /* code */
      //student_t s;
      //deleteStudent(s);
      break;
    case 5:
      /* code */
      //load;
      break;
    case 6:
      /* code */
      //save;
      break;
    case 7:
      break;
    default:
      break;
    }
  }

  return 0;
}