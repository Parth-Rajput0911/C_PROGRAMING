
#include<stdio.h>
int main()
{
    int a[5] = {5, 8, 8, 4, 4};
    int dup = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                dup = a[i];
                printf("The Duplicate element in Array is %d\n", dup);
            }
        }
    }

    return 0;
}