#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    p = (int *)malloc(sizeof(int));

    printf("Enter a number: ");
    scanf("%d", p);

    printf("Number = %d", *p);

    free(p);

    return 0;
}