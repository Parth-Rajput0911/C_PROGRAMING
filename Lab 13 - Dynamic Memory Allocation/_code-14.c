#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,r,c;
    int *a,*b,*sum;

    printf("Rows and Columns: ");
    scanf("%d%d",&r,&c);

    a=(int *)malloc(r*c*sizeof(int));
    b=(int *)malloc(r*c*sizeof(int));
    sum=(int *)malloc(r*c*sizeof(int));

    printf("Enter first matrix:\n");
    for(i=0;i<r*c;i++)
        scanf("%d",&a[i]);

    printf("Enter second matrix:\n");
    for(i=0;i<r*c;i++)
        scanf("%d",&b[i]);

    for(i=0;i<r*c;i++)
        sum[i]=a[i]+b[i];

    printf("Sum Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",sum[i*c+j]);
        printf("\n");
    }

    free(a);
    free(b);
    free(sum);

    return 0;
}