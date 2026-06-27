//WAP TO CHANGE TENP FROM CELCIUS TO FHRANHIET AND KELVIN.
#include<stdio.h>
int main()
{
    float c,f,k;
    printf("Enter temp in celcius:");
    scanf("%f", &c);
    f=32+(c*5)/9;
    k=c+273;
    printf("The temp in fhranhiet is%f\n",f);
    printf("The temp in kelvin is%f",k);
    return 0;
}