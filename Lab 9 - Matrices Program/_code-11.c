#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, max;

    printf("Enter 9 elements:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    max = a[0][0];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("Largest Element = %d", max);

    return 0;
}