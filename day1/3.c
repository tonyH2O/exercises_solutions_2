#include <stdio.h>

int main()

{
  float g1,g2,g3,g4,g5;
  float total;

  printf("How much? ");
  scanf(" %f", &g1);
  printf("How much? ");
  scanf(" %f", &g2);
  printf("How much? ");
  scanf(" %f", &g3);
  printf("How much? ");
  scanf(" %f", &g4);
  printf("How much? ");
  scanf(" %f", &g5);

  total = g1+g2+g3+g4+g5;

  printf("\nThe total is $%.2f", total);
  return 0;
  }



