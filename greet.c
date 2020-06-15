/* Write a simple program that greets you by name. 
You have read the string from the console.
The output is simple: Hello, {name} */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    printf("Write a name: ");
    scanf("%s", name);
    printf("Hello, %s\n", name);
    return 0;
}