//WAP that finds the sum of diagonal elements of an mxn matrix.
#include<stdio.h>
int main()
{
    int a[10][10],i,j,n,sum=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<n;i++)
    sum = sum + a[i][i];

    printf("Sum = %d",sum);

    return 0;
}
