#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, min;

    printf("Enter 9 elements:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    min = a[0][0];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }

    printf("Smallest Element = %d", min);

    return 0;
}