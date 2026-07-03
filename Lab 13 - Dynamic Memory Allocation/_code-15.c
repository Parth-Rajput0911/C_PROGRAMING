#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,n,i;

    printf("Enter size: ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nElement\tAddress\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%p\n",a[i],(void *)&a[i]);
    }

    free(a);

    return 0;
}