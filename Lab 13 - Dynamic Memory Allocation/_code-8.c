#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,n,i;

    printf("Enter size: ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Reverse Array:\n");

    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);

    free(a);

    return 0;
}