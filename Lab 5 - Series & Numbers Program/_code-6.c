//WAP for decimal to binary conversion and vice versa
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0,rem,dec=0;

    printf("Enter binary number:\n");//binary to decimal
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%10;
        dec = dec + rem*pow(2,i);
        n=n/10;
        i++;
    }

    printf("Decimal = %d\n",dec);

    return 0;
}
#include<stdio.h>
int main()
{
    int n,bin=0,place=1,rem;

    printf("Enter decimal number:\n");//decimal to binary
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%2;
        bin = bin + rem*place;
        place = place*10;
        n = n/2;
    }

    printf("Binary = %d\n",bin);

    return 0;
}