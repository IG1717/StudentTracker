/*
Student type
*/
typedef struct student {
  int id;
  char name[50];
  float gpa;
} student_t;

void addStudent(student_t stud);       // Add student
student_t *viewStudents(void);    // View students
student_t findStudent(student_t stud); // find Student
void deleteStudent(student_t stud);    // delete Student
void load(void);
void save(void);