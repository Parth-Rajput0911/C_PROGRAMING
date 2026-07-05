#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, sum;

    printf("Enter Matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nColumn Sum:\n");

    for(j=0;j<3;j++)
    {
        sum=0;

        for(i=0;i<3;i++)
        {
            sum=sum+a[i][j];
        }

        printf("Column %d Sum = %d\n",j+1,sum);
    }

    return 0;
}