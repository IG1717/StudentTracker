/*
Student type
*/
typedef struct student {
  int id;
  char name[50];
  float gpa;
} student_t;

void addStudent(student_t stud);       // Add student
void viewStudents(void);    // View students
student_t findStudent(int id); // find Student
void deleteStudent(student_t stud);    // delete Student
void printStudentInfo(student_t stud); // Prints out the characteristics of a student
void load(void);
void save(void);