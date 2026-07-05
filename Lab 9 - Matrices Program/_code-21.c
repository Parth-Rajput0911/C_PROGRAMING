#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;
    int flag = 1;

    printf("Enter Matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
            }
        }
    }

    if(flag == 1)
    {
        printf("Matrix is Symmetric");
    }
    else
    {
        printf("Matrix is Not Symmetric");
    }

    return 0;
}