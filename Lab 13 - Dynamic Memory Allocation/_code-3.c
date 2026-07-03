#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Elements are:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    free(a);

    return 0;
}