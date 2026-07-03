#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,n,i,even=0,odd=0;

    printf("Enter size: ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n",even);
    printf("Odd = %d",odd);

    free(a);

    return 0;
}