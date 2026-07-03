#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,n,i,newSize;

    printf("Enter size: ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter new size: ");
    scanf("%d",&newSize);

    a=(int *)realloc(a,newSize*sizeof(int));

    for(i=n;i<newSize;i++)
        scanf("%d",&a[i]);

    printf("Array:\n");

    for(i=0;i<newSize;i++)
        printf("%d ",a[i]);

    free(a);

    return 0;
}