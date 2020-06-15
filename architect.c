/* Calculate the working hours of an architect required to finish 
the projects of few buildings.
 Single building project takes about 3 hours. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    printf("Write a name: ");
    scanf("%s", name);
    int building;
    printf("Count: ");
    scanf("%d", &building);
    int total = building * 3;
    printf("The Architect %s will need %d hours to complete %d project\'s.\n", name, total, building);
    return 0;
}