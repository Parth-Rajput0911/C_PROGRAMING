//WAP TO FIND SUM OF N NUMBER GIVEN BY USER.
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the number:");
    scanf("%d", &n);

    for(int i = 1;i <= n;i++) {
        sum = sum + i; }
    printf("sum of number from 1 to %d is %d\n",n,sum );
    
}
