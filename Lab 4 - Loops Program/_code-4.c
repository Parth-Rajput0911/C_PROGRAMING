//WAP TO FIND LCM OF TWO NUUMBER
#include <stdio.h>
int main()
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);

    for(lcm = 1; ; lcm++)
    {
        if(lcm % a == 0 && lcm % b == 0)
        {
            printf("LCM = %d", lcm);
            break;
        }
    }

    return 0;
}