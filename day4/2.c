#include <stdio.h>

int main()
{
  double width = 32.3;
  double height = 15.3;

  double perimeter=0.0;
  double area=0.0;

  perimeter=2.0*(height+width);
  area=width*height;

  printf("Perimeter is: %f", perimeter);
  printf("Area is: %f", area);

}

