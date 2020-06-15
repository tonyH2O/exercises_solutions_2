/* Read real number inches and convert it to centimeters.
(1 inch = 2.54 centimeters).

Input = 5 , Output = 12.70 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Num: ");
    scanf("%d", &a);
    float inch_to_cm = a * 2.54;
    printf("Result is: %.2f\n", inch_to_cm);
    return 0;
}