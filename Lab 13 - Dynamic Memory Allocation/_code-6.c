#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,n,i,min;

    printf("Enter size: ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    min=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }

    printf("Smallest = %d",min);

    free(a);

    return 0;
}