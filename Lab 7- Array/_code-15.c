#include <stdio.h>
int main()
{
    int a[100], n, i;
    int positive=0, negative=0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

        if(a[i]>=0)
            positive++;
        else
            negative++;
    }

    printf("Positive = %d\n",positive);
    printf("Negative = %d",negative);

    return 0;
}