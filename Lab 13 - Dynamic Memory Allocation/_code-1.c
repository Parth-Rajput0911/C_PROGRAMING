//WAP to find the largest among 20 integers using dynamic memory location.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a;
    int i, max;

    // allocating memory for 20 integers
    a = (int*)malloc(20 * sizeof(int));

    if(a == NULL)
    {
        printf("Memory not allocated\n");
        return 0;
    }

    printf("Enter 20 integers:\n");

    for(i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];

    for(i = 1; i < 20; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    printf("Largest number = %d\n", max);

    free(a);   // free memory

    return 0;
}