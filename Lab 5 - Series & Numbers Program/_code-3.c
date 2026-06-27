#include<stdio.h>
int main()
{
    int n,num,r,sum=0;
    printf("enter the number:");
    scanf("%d", &n);
    while(num=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
       }
     printf("The sum of the digit of the num %d:is%d",num,sum);
    return 0;
}