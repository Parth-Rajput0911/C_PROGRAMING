//WAP TO IMPLIMENT REDIX SORT.
#include<stdio.h>
void redixsort(int arr,int n){
    int max =arr[0];
    int div=1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    int aux [10];
    while (max/div)
    {
        for(int j=0;j<10;j++){
        
    }

    }
    
    
}
int main()
{
    int arr[] = {8,7,6,9,4,6,8,6,2};
    int n = sizeof(arr) / sizeof(arr[0]);

radixsort(arr,n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}