//WAP TO GIVE GRADE TO STUDENTS TO ON THE BASIS OF THEIR NUMBER IN FIVE SUBJECT.
#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5,sum,percentage;
    printf("enter marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &sub1,&sub2,&sub3,&sub4,&sub5);
    sum=sub1+sub2+sub3+sub4+sub5;
    percentage=sum/5;
    if(percentage>90 && percentage<=100)
    {
        printf("Grade A");
    }
    else if(percentage>80 && percentage<=90)
    {
        printf("Grade B");
    }
    else if(percentage>60 && percentage<=80)
    {
        printf("Grade C");
    }
    else{
        printf("Grade D");
    }
    return 0;
}
    