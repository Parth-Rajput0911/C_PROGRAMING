//WWP TO FIND GCD OF TWO NO 
#include<stdio.h>
int main()
{
    int a,b,i,gcd;
    
    printf("Enter NO A AND B");
    scanf("%d%d", &a,&b);

    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            printf("The GCD IS %d",i);
        }
        
    }
    return 0;

}