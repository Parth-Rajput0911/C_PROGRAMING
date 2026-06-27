//WAP to search an element in an array using binary search techniques
#include<stdio.h>
int main()
{
    int a[100],n,i,key,low=0,high,mid,flag=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter element:\n");
    scanf("%d",&key);

    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==key)
        {
            flag=1;
            break;
        }
        else if(a[mid]<key)
        low=mid+1;
        else
        high=mid-1;
    }

    if(flag==1)
    printf("Found");
    else
    printf("Not Found");

    return 0;
}