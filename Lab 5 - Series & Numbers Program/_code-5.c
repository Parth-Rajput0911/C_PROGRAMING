//WAP to find Armstrong no ftom1 to 100.
#include<stdio.h>
int main()
{
    int i,n,rem,sum;

    for(i=1;i<=100;i++)
    {
        n=i;
        sum=0;

        while(n>0)
        {
            rem=n%10;
            sum=sum+(rem*rem*rem);
            n=n/10;
        }

        if(sum==i)
        {
            printf("%d ",i);
        }
    }

    return 0;
}