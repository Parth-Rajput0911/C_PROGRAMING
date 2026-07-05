#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;
    int zero = 0;

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
            if(a[i][j] == 0)
            {
                zero++;
            }
        }
    }

    if(zero > (3 * 3) / 2)
    {
        printf("Sparse Matrix");
    }
    else
    {
        printf("Not a Sparse Matrix");
    }

    return 0;
}