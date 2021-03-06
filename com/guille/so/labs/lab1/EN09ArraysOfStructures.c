#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMUMSIZE 20

#define NUMBER_OF_STUDENTS 3

struct person {
  char name[MAXIMUMSIZE];
  int age;
  float income;
};

float averageIncome(struct person []);

main (int argc, char *argv[]) {

  struct person students[NUMBER_OF_STUDENTS]={{"Juan", 23, 777.11}, {"Luis",19,111.1}, {"Pedro",56,9327.2}};

  printf("The average income of the students is %f\n", averageIncome(students));
  posYoungestStudent(students);
  exit(1);
}

float averageIncome(struct person people[]) {

  int i;
  float accumulator=0;

  for (i=0;i<NUMBER_OF_STUDENTS;i++)
    accumulator += people[i].income;

  return accumulator/NUMBER_OF_STUDENTS;
}

int posYoungestStudent(struct person people[]) {

  int index = 0;
  int i;
  int minAge = 99;

  for(i=0; i<NUMBER_OF_STUDENTS;i++) {
    if(people[i].age<minAge) {
      index = i;
      minAge = people[index].age;
    }
  }

  printf("The youngest student is %s, that is %d years old\n", people[index].name, people[index].age);
  return i;
}

// 1. Compile using "gcc EN09ArrayOfStructures.c"
// 2. Execute using "./a.out"
// 3. Add a second function that shows the name of the youngest student and returns the position of that student in the array
