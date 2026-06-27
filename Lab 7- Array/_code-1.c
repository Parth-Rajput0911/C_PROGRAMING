//WAP SUM Of Arrays
#include<stdio.h>
int main()
{
    int i,j,n,x;
    printf("enter the no of lines of pattern ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        x=1;
        for(j=0;j<=i;j++)
        {
            printf("%d ",x);
            x = x*(i-j)/(j+1);
        }
        printf("\n");
    }

    return 0;
}