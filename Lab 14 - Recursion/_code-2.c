//WAP find factorial of n no using recursion
#include <stdio.h>
int fact(int); 
int fact(int x) 
{
    if (x == 1 || x == 0)
    {
        return 1;
    }

    else
    {
        return x * fact(x - 1);
    }
}
int main()
{
    int x, factorial;
    printf("Enter the number\n");
    scanf("%d", &x);
    if (x < 0)
    {
        printf("The factorial of negative number is not possible.\n");
    }
    factorial = fact(x);
    printf("%d\n", factorial);
    return 0;
}