//WAP TO FIND THE SUM OF EVEN AND ODD NO OF THE GIVEN NO BY USER.
#include<stdio.h>
int main()
{
    int num,oddsum=0,evensum=0;
    printf("enter the no \n");
    scanf("%d", &num);
    for(int i=0;i<=num;i++)
    {
        if(i%2==0){
            evensum = evensum + i;
        }
        else{
            oddsum = oddsum + i;
        }
    }
    printf("sum of even term is:%d \n",evensum);
    printf("sum of odd  term is:%d \n",oddsum);
    return 0;
}