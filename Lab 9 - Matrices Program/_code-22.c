#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;
    int k;

    printf("Enter Matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Scalar Value: ");
    scanf("%d", &k);

    printf("\nResult Matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j] * k);
        }
        printf("\n");
    }

    return 0;
}