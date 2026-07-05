#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;
    int num;
    int found = 0;

    printf("Enter Matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Element to Search: ");
    scanf("%d", &num);

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] == num)
            {
                printf("Element Found at Row %d Column %d\n", i + 1, j + 1);
                found = 1;
            }
        }
    }

    if(found == 0)
    {
        printf("Element Not Found");
    }

    return 0;
}