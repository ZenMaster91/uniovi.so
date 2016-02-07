                                                                                                                                                                         4


































































File EN08Structs.c saved
UO236856@ritchie:~/lab1/C$ joe EN08Structs.c 
Processing '/etc/joe/joerc'...Processing '/etc/joe/ftyperc'...done
done




































































^K  I A  EN08Structs.c (c)  }                                                                                                                       Row 35   Col 1    6:55  Ctrl-K H for help
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

  strcpy(student.name,argv[0]);
  student.age=atoi(argv[1]);
  student.income=atof(argv[2]);

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
































File EN08Structs.c not changed so no update needed
UO236856@ritchie:~/lab1/C$ gcc EN08Structs.c
UO236856@ritchie:~/lab1/C$ ./a.out 
The overall income of the teacher and the student is 777.109985
The income of the student is: 0.000000
The income of the teacher is: 777.109985
The student name is: TERM=xterm-256color
The teacher name is: Fernando
UO236856@ritchie:~/lab1/C$ ./a.out Pepe 12 99.99
The overall income of the teacher and the student is 777.109985
The income of the student is: 0.000000
The income of the teacher is: 777.109985
The student name is: TERM=xterm-256color
The teacher name is: Fernando
UO236856@ritchie:~/lab1/C$ ./a.out Pepe,12,99.99
The overall income of the teacher and the student is 777.109985
The income of the student is: 0.000000
The income of the teacher is: 777.109985
The student name is: TERM=xterm-256color
The teacher name is: Fernando
UO236856@ritchie:~/lab1/C$ clear

UO236856@ritchie:~/lab1/C$ nano EN08Structs.c
UO236856@ritchie:~/lab1/C$ ./a.out "Pepe 12 99.99"
The overall income of the teacher and the student is 777.109985
The income of the student is: 0.000000
The income of the teacher is: 777.109985
The student name is: TERM=xterm-256color
The teacher name is: Fernando
UO236856@ritchie:~/lab1/C$ nano EN08Structs.c
UO236856@ritchie:~/lab1/C$ ./a.out "Pepe 12 99.99"
The overall income of the teacher and the student is 777.109985
The income of the student is: 0.000000
The income of the teacher is: 777.109985
The student name is: TERM=xterm-256color
The teacher name is: Fernando
UO236856@ritchie:~/lab1/C$ nano EN08Structs.c
UO236856@ritchie:~/lab1/C$ gcc EN08Structs.c
EN08Structs.c: In function ‘main’:
EN08Structs.c:19:7: error: expected identifier or ‘(’ before ‘[’ token
EN08Structs.c:24:16: error: ‘name’ undeclared (first use in this function)
EN08Structs.c:24:16: note: each undeclared identifier is reported only once for each function it appears in
EN08Structs.c:33:18: error: expected ‘;’ before ‘)’ token
EN08Structs.c:33:18: error: expected statement before ‘)’ token
EN08Structs.c:34:24: error: expected ‘;’ before ‘)’ token
EN08Structs.c:34:24: error: expected statement before ‘)’ token
UO236856@ritchie:~/lab1/C$ nano EN08Structs.c
UO236856@ritchie:~/lab1/C$ gcc EN08Structs.c
EN08Structs.c: In function ‘main’:
EN08Structs.c:19:7: error: expected identifier or ‘(’ before ‘[’ token
EN08Structs.c:24:16: error: ‘name’ undeclared (first use in this function)
EN08Structs.c:24:16: note: each undeclared identifier is reported only once for each function it appears in
EN08Structs.c:33:18: error: expected ‘;’ before ‘)’ token
EN08Structs.c:33:18: error: expected statement before ‘)’ token
EN08Structs.c:34:24: error: expected ‘;’ before ‘)’ token
EN08Structs.c:34:24: error: expected statement before ‘)’ token
UO236856@ritchie:~/lab1/C$ nano EN08Structs.c
UO236856@ritchie:~/lab1/C$ gcc EN08Structs.c
EN08Structs.c: In function ‘main’:
EN08Structs.c:19:13: error: ‘MAXIMUNSIZE’ undeclared (first use in this function)
EN08Structs.c:19:13: note: each undeclared identifier is reported only once for each function it appears in
EN08Structs.c:33:18: error: expected ‘;’ before ‘)’ token
EN08Structs.c:33:18: error: expected statement before ‘)’ token
EN08Structs.c:34:24: error: expected ‘;’ before ‘)’ token
EN08Structs.c:34:24: error: expected statement before ‘)’ token
UO236856@ritchie:~/lab1/C$ nano EN08Structs.c
UO236856@ritchie:~/lab1/C$ gcc EN08Structs.c
EN08Structs.c: In function ‘main’:
EN08Structs.c:33:18: error: expected ‘;’ before ‘)’ token
EN08Structs.c:33:18: error: expected statement before ‘)’ token
EN08Structs.c:34:24: error: expected ‘;’ before ‘)’ token
EN08Structs.c:34:24: error: expected statement before ‘)’ token
UO236856@ritchie:~/lab1/C$ nano EN08Structs.c
UO236856@ritchie:~/lab1/C$ gcc EN08Structs.c
UO236856@ritchie:~/lab1/C$ ./a.out
Please enter the name of the student Pepe
Please enter the age of the student 12
Please enter the income of the student 44.45
The overall income of the teacher and the student is 821.559998
The income of the student is: 44.450001
The income of the teacher is: 777.109985
The student name is: Pepe
The teacher name is: Fernando
UO236856@ritchie:~/lab1/C$ ls
a.out             EN01HelloWorld.c~  EN03CommandLine.c   EN04PrimeNumbers.c~  EN06LookForAChar.c                 EN07ByReferenceParameterPassing.c~  EN09ArrayOfStructures.c  EN10States.h
DEADJOE           EN02HelloWorld.c   EN03CommandLine.c~  EN05ToUpperCase.c    EN06LookForAChar.c~                EN08Structs.c                       EN10MainStates.c
EN01HelloWorld.c  EN02HelloWorld.c~  EN04PrimeNumbers.c  EN05ToUpperCase.c~   EN07ByReferenceParameterPassing.c  EN08Structs.c~                      EN10States.c
UO236856@ritchie:~/lab1/C$ clear

UO236856@ritchie:~/lab1/C$ clear


































































UO236856@ritchie:~/lab1/C$ ls
a.out             EN01HelloWorld.c~  EN03CommandLine.c   EN04PrimeNumbers.c~  EN06LookForAChar.c                 EN07ByReferenceParameterPassing.c~  EN09ArrayOfStructures.c  EN10States.h
DEADJOE           EN02HelloWorld.c   EN03CommandLine.c~  EN05ToUpperCase.c    EN06LookForAChar.c~                EN08Structs.c                       EN10MainStates.c
EN01HelloWorld.c  EN02HelloWorld.c~  EN04PrimeNumbers.c  EN05ToUpperCase.c~   EN07ByReferenceParameterPassing.c  EN08Structs.c~                      EN10States.c
UO236856@ritchie:~/lab1/C$ nano EN09ArrayOfStructures.c 
UO236856@ritchie:~/lab1/C$ gcc EN09ArrayOfStructures.c 
UO236856@ritchie:~/lab1/C$ ./a.out 
The average income of the students is 3405.136719
The youngest student is Pedro, that is 56 years oldUO236856@ritchie:~/lab1/C$ nano EN09ArrayOfStructures.c 
UO236856@ritchie:~/lab1/C$ gcc EN09ArrayOfStructures.c 
UO236856@ritchie:~/lab1/C$ ./a.out 
The average income of the students is 3405.136719
The youngest student is Luis, that is 19 years oldUO236856@ritchie:~/lab1/C$ nano EN09ArrayOfStructures.c 
UO236856@ritchie:~/lab1/C$ gcc EN09ArrayOfStructures.c 
UO236856@ritchie:~/lab1/C$ ./a.out 
The average income of the students is 3405.136719
The youngest student is Luis, that is 19 years old
UO236856@ritchie:~/lab1/C$ nano EN10MainStates.c 
UO236856@ritchie:~/lab1/C$ gcc EN10MainStates.c 
/tmp/cchBaH3h.o: In function `main':
EN10MainStates.c:(.text+0x44): undefined reference to `getStateName'
EN10MainStates.c:(.text+0x80): undefined reference to `getTransitionName'
EN10MainStates.c:(.text+0xe6): undefined reference to `changeState'
EN10MainStates.c:(.text+0xed): undefined reference to `getStateName'
EN10MainStates.c:(.text+0xfa): undefined reference to `getStateName'
EN10MainStates.c:(.text+0x107): undefined reference to `getTransitionName'
collect2: error: ld returned 1 exit status
UO236856@ritchie:~/lab1/C$ gcc EN10MainStates.c 
/tmp/cczHAzGY.o: In function `main':
EN10MainStates.c:(.text+0x44): undefined reference to `getStateName'
EN10MainStates.c:(.text+0x80): undefined reference to `getTransitionName'
EN10MainStates.c:(.text+0xe6): undefined reference to `changeState'
EN10MainStates.c:(.text+0xed): undefined reference to `getStateName'
EN10MainStates.c:(.text+0xfa): undefined reference to `getStateName'
EN10MainStates.c:(.text+0x107): undefined reference to `getTransitionName'
collect2: error: ld returned 1 exit status
UO236856@ritchie:~/lab1/C$ gcc EN10MainStates.c ss
gcc: error: ss: No existe el fichero o el directorio
UO236856@ritchie:~/lab1/C$ gcc EN10MainStates.c 
/tmp/ccZiSoyd.o: In function `main':
EN10MainStates.c:(.text+0x44): undefined reference to `getStateName'
EN10MainStates.c:(.text+0x80): undefined reference to `getTransitionName'
EN10MainStates.c:(.text+0xe6): undefined reference to `changeState'
EN10MainStates.c:(.text+0xed): undefined reference to `getStateName'
EN10MainStates.c:(.text+0xfa): undefined reference to `getStateName'
EN10MainStates.c:(.text+0x107): undefined reference to `getTransitionName'
collect2: error: ld returned 1 exit status
UO236856@ritchie:~/lab1/C$ nano EN10MainStates.c 
UO236856@ritchie:~/lab1/C$ gcc EN10States.c EN10MainStates.c
UO236856@ritchie:~/lab1/C$ ./a.out 
Syntax: ./a.out StateNumber TransitionNumber
READY (0),EXECUTING (1),BLOCKED (2),EXIT (3),
DISPATCH (0),BLOCK (1),WAKEUP (2),RELEASE (3),
UO236856@ritchie:~/lab1/C$ clear













UO236856@ritchie:~/lab1/C$ nano EN10MainStates.c 
UO236856@ritchie:~/lab1/C$ nano EN10States.
UO236856@ritchie:~/lab1/C$ nano EN10States.c
UO236856@ritchie:~/lab1/C$ nano EN10MainStates.c 
UO236856@ritchie:~/lab1/C$ nano EN10States.c
UO236856@ritchie:~/lab1/C$ nano EN01HelloWorld.c
UO236856@ritchie:~/lab1/C$ nano EN02HelloWorld.c
UO236856@ritchie:~/lab1/C$ clear



























































UO236856@ritchie:~/lab1/C$ nanao EN03CommandLine.c
-bash: nanao: no se encontró la orden
UO236856@ritchie:~/lab1/C$ nano EN03CommandLine.c
UO236856@ritchie:~/lab1/C$ nano EN04PrimeNumbers.c
UO236856@ritchie:~/lab1/C$ nano EN05ToUpperCase.c
UO236856@ritchie:~/lab1/C$ nano EN06LookForAChar.c
UO236856@ritchie:~/lab1/C$ nano EN07ByReferenceParameterPassing.c
UO236856@ritchie:~/lab1/C$ nanao EN08Structs.c
-bash: nanao: no se encontró la orden
UO236856@ritchie:~/lab1/C$ nano EN08Structs.c
UO236856@ritchie:~/lab1/C$ nano EN09ArrayOfStructures.c



























































































  GNU nano 2.2.6                                         Fichero: EN09ArrayOfStructures.c                                                                                            

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
