/* Develop a program that calculates the price and discount given by yard greening organization. 
The price per square meter is 7.61usd. 
There is discount equal to 18% from the total price.

Single line:
1. Square meters – real number [0.00… 10000.00]
Output
Print two lines:
The final price is: {final_cost} usd.
The discount is: {discount} usd.

Both values formatted to two digits after the decimal point. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int meter;
    printf("meter: ");
    scanf("%d", &meter);
    float final = meter * 7.61;
    float discount = final * 0.18;
    float final_2 = final - discount;
    printf("The final price is: %.2f usd.\n", final_2);
    printf("The discount is: %.2f usd.\n", discount);
    return 0;
}