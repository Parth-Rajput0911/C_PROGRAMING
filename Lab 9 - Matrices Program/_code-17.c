#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;
    int sum = 0;

    printf("Enter Matrix:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        sum = sum + a[i][2-i];
    }

    printf("Sum of Secondary Diagonal = %d", sum);

    return 0;
}