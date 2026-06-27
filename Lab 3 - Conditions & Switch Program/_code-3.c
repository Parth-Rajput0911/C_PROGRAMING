// WAP TO MAKE AN SIMPLE ARTHEMATIC CALCULATOR.
#include<stdio.h>
int main()
{
    int num1,num2,result;
    char op;
    printf("Enter The Num 1\n");
    scanf("%d", &num1);
    printf("Enter number 2\n");
    scanf("%d", &num2);
    printf("Enter the oprator\n");
    scanf(" %c",&op);
    switch(op)
    {
        case'+':
        result=num1+num2;
        printf("the sum is %d",result);
        break;
        case'-':
        result=num1-num2;
        printf("the diff is %d",result);
        break;
        case'*':
        result=num1*num2;
        printf("the product is %d",result);
        break;
        case'/':
        if(num2!=0){
            result=num1/num2;
            printf("the qutiont is %d",result);
        }
        else{
            printf("not defined");
        }
        break;
        default:
        printf("OOPS! Wrong Choice");
       
    }
    return 0;
}