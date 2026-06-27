//WAP TO FIND SIMPLE AND COMPOUND INTREST AFTER TAKING INPUT FROM USER.
#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,ci,amount;
    printf("enter the value");
    scanf("%f%f%f", &p,&r,&t);
    si=(p*r*t)/100;
    amount=p*pow((1+r/100),t);
    ci=amount-p;
    printf("the simple interest is %f and the compound intret is %f",si,ci);
    return 0;
}