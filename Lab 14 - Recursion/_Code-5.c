//WAP TO FIND GCD USING RECURSION.
#include <stdio.h>
int gcd(int, int);    // function prototype
int gcd(int a, int b) // function definition
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
int main()
{
    int a, b;
    printf("enter a\n");
    scanf("%d", &a);
    printf("enter b\n");
    scanf("%d", &b);
    printf("The greatest common factor is %d\n", gcd(a, b));
    return 0;
}