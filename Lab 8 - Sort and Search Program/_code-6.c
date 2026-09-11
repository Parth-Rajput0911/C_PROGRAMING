//WAP TO SORT AN ARRAY USING MERGE SORT
#include<stdio.h>
void merge(int *arr,int low,int mid,int high){
        int i= low;
        int j= mid+1;
        int k= 0;
        int temp[high-low+1];
        while(i<=mid && j<=high){
            if(arr[i]<arr[j]){
                temp[k++]=arr[i++];
            }
            if(arr[i]>arr[j]){
                temp[k++]=arr[j++];
            }
        }
        while (i<=mid)
        {
            temp[k++] = arr[i++];       
        }
        while (j<=high)
        {
            temp[k++] = arr[j++];
        }
            k = 0;
        for(i=low;i<=high;i++){
             arr[i] = temp[k];
            k++;
        
        } 
}
void mergesort(int arr[],int low,int high)
{
    if(low < high){
        int mid = (low +high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low, mid,high);
        
    }
}
int main()
{
    int arr[]={8,75,5,79,400,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
