//WAP TO FIND IF TWO NO GIVEN BY USER INPUT ARE EQUAL OR NOT.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two number\n");
    scanf("%d%d", &a,&b);
    if(a==b){
        printf("NUMBER ARE EQUAL");
    }
    else{
        printf("NUMBER ARE NOT EQUAL");

    }
    return 0;
}