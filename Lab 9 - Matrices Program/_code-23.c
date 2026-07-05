#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;
    int even = 0, odd = 0;

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
            if(a[i][j] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }

    printf("Even Elements = %d\n", even);
    printf("Odd Elements = %d\n", odd);

    return 0;
}