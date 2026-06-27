//WAP to print fibinachi series using recursion
#include <stdio.h>
int fib(int); 
int fib(int x) 
{
    if (x == 1)
    {
        return 0;
    }
    else if (x == 2)
    {
        return 1;
    }
    else
    {
        return fib(x - 1) + fib(x - 2);
    }
}
int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d", &x);
    
    for (int i = 1; i <= x; i++)
    {
         printf("%d\n", fib(i));
    }
    
    return 0;
}