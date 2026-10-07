//WAP TO SORT AN ARRAY USING SHELL SORT
#include<stdio.h>
void shellsort(int arr[],int n){
    int gap=n/2;
    while(gap>=1){
    for(int i=gap;i<n;i++){
        int temp=arr[i];
        int j=i-gap;
        
        while(j>=0 && arr[j]>temp){
            arr[j+gap]=arr[j];
            j=j-gap;
        
        }
        arr[j+gap]=temp;
    }
    gap=gap/2;
    }

}

int main()
{
    int arr[] = {8, 7, 5, 8, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    shellsort(arr,n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}