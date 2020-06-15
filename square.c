/* Read single integer (square side) from the console and print the area of the square.

Input = 5 , Output = 25 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a num: ");
    scanf("%d", &a);
    int total = a * a;
    printf("Result is: %d\n", total);
    return 0;
}