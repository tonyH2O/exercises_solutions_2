/* You have to buy dog food for the local zoo. 
But you buy food for you own dog too. 
The price for the zoo dog is 2.50usd.
and for your dogs you pay 4 usd.

Read 2 lines:
1. Zoo dogs count – integer [0… 100]
2. Your dogs count - integer [0… 100] */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    int b;
    printf("Zoo food: ");
    scanf("%f", &a);
    printf("Dog food: ");
    scanf("%d", &b);
    float zoo = a * 2.50;
    int dog = b * 4;
    float total = zoo + dog;
    printf("Output: %.2f usd.\n", total);
    return 0;
}