//WAP TO FIND SUM OF DIGITS USING RECURSION.
#include <stdio.h>
int digit(int a); // function prototype
int digit(int a)  // function definition
{
    int sum = 0, d;
    while (a > 0)
    {
        d = a % 10;
        sum = sum + d;
        a = a / 10;
    }

    
    return sum;
}
int main()
{
    int a;
    printf("enter a\n");
    scanf("%d", &a);
    printf("%d\n", digit(a));
    return 0;
}