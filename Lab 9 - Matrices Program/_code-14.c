#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;

    printf("Enter Matrix:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Principal Diagonal Elements:\n");

    for(i=0; i<3; i++)
    {
        printf("%d ", a[i][i]);
    }

    return 0;
}