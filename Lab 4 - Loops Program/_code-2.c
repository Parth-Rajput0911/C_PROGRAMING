//WAP TO FIND FACTORIAL OF N NUMBER GIVEN BY USER.
#include<stdio.h>
int main()
{
    int n ,i;
    unsigned long long fact=1;
    printf("enter the given no:");
    scanf("%d", &n);
    if (n<0){
        printf("Error");
        }
    else{

        for(i=1; i<=n; i++){
        fact =fact*i;
        }
        printf("the fact of %d is %d\n",n,fact);
        }
        return 0;
}