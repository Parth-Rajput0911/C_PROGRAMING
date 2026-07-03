#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,n,i,sum=0;
    float avg;

    printf("Enter size: ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    avg=(float)sum/n;

    printf("Average = %.2f",avg);

    free(a);

    return 0;
}