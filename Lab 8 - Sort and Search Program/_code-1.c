//WAP to search an element in an array using linear search
#include<stdio.h>
int main()
{
    int a[100],n,i,key,flag=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter element:\n");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    printf("Found");
    else
    printf("Not Found");

    return 0;
}