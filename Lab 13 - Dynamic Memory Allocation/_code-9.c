#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,n,i,key,found=0;

    printf("Enter size: ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            found=1;
            break;
        }
    }

    if(found)
        printf("Element Found");
    else
        printf("Element Not Found");

    free(a);

    return 0;
}