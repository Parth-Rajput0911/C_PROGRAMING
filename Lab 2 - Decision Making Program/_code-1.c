//WAP TO SWAP TWO NUMBER TAKEN USER INPUT USING A THIRD VARIABLE.
#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter the two to:\n");
    scanf("%d%d", &a,&b);
    t=a;
    a=b;
    b=t;
    printf("After Swaping\n a=%d\n b=%d\n",a,b);
    return 0;

}