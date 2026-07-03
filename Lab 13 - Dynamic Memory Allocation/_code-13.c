#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *name;

    name=(char *)malloc(50*sizeof(char));

    printf("Enter name: ");
    scanf("%s",name);

    printf("Name = %s",name);

    free(name);

    return 0;
}