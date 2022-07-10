#define KIDS 3
#define FAMILY "The Pays"
#define MORTGAGE_RATE 5.15
#include <stdio.h>
#include <string.h>

int main()

{

  int age;
  char childname[14] = "Thomas";

  printf("\n%s have %d kids.\n", FAMILY, KIDS);

  age = 11;
  printf("The oldest, %s, is %d.\n", childname, age);

  strcpy(childname, "Chris");
  age = 6;
  printf("The middle boy, %s, is %d.\n", childname, age);

  age = 3;
  strcpy(childname, "Ben");
  printf("The youngest, %s, is %d.\n", childname, age);

  return 0;

  }


