//WAP program to find sum of element of array.
#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;

    printf("Enter size:\n");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    sum = sum + a[i];

    printf("Sum = %d\n",sum);

    return 0;
}
