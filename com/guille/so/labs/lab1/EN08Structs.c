#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMUMSIZE 20

struct person {
  char name[MAXIMUMSIZE];
  int age;
  float income;
}

main (int argc, char *argv[]) {
  
  struct person teacher={"Fernando", 23, 777.11};
  
  struct person student;
  
  char name[MAXIMUMSIZE];
  int age = 0;
  float income = 0.0;

  printf("Please enter the name of the student ");
  scanf("%s", &name );

  printf("Please enter the age of the student ");
  scanf("%d", &age );

  printf("Please enter the income of the student ");
  scanf("%f", &income );

  strcpy(student.name,name);
  student.age=age;
  student.income=income;
  
  printf("The overall income of the teacher and the student is %f\n",student.income+teacher.income);
  printf("The income of the student is: %f\n", student.income);
  printf("The income of the teacher is: %f\n", teacher.income);
  printf("The student name is: %s\n", student.name);
  printf("The teacher name is: %s\n", teacher.name);
   
  exit(1);
}

// 1. Compile using "gcc EN08Structs.c"
// 2. Execute using "./a.out"
// 3. Modify the programa so that the teacher's name, age and income are obtained from the command line 
