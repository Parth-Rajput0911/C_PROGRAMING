//WAP to swap two elementsusing the concept swap using pointer
#include<stdio.h>
int main()
{
    int a=10,b=20,*p,*q,temp;

    p=&a;
    q=&b;

    temp=*p;
    *p=*q;
    *q=temp;

    printf("%d %d",a,b);

    return 0;
}
