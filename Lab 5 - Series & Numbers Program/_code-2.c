#include<stdio.h>
int main()
    {
        int n,flag=0;
        printf("enter the number to be checked:");
        scanf("%d",&n);
        if(n<=1)
        flag=1;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("%d is prime number",n);
        else
        printf("%d is not prime",n);
        
        return 0;
    }
