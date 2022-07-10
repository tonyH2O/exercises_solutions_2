#include <stdio.h>
#define CURRENTYEAR 2022

int main()

{

  int year_born, age;

  printf("What year were you born?\n");
  scanf(" %d", &year_born);

  if (year_born > CURRENTYEAR)
  {
    printf("You havent been born yet?\n");

    }

  age = CURRENTYEAR - year_born;

  printf("\nSo this year you will turn %d on your birthday!\n", age);

  if ((year_born % 4) == 0)
  {

    printf("\nYou were born in a Leap Year\n");
    }

    return 0;

    }

