// WAP TO CALCULATE THE SUM AND AVRAGE  MARKS OF FIVE. 
#include<stdio.h>
int main()
{
    float a,b,c,d,e,sum,avg;
    printf("ENTER THE NUMBER");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    sum= (a+b+c+d+e);
    avg=sum/5;
    printf("sum is %f and avrage is %f",sum,avg);

 return 0;

}