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
            if(i == j)
            {
                if(a[i][j] != 1)
                {
                    flag = 0;
                }
            }
            else
            {
                if(a[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }
    }

    if(flag == 1)
    {
        printf("Identity Matrix");
    }
    else
    {
        printf("Not an Identity Matrix");
    }

    return 0;
}