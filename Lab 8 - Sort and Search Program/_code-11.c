//WAP TO SORT USING COUNT SORT
#include<stdio.h>
void countsort(int arr[],int n)
{ 
    int max =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int count[max+1];
    for(int i=0;i<max+1;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;

    }
    int j=0,i=0;
    while(i<max+1){
        if(count[i]>0){
            arr[j]=i;
            j++;
            count[i]--;

        }
        else{
            i++;
        }
    }
}
int main()
{
    int arr[] = {8,7,6,9,4,6,8,6,2};
    int n = sizeof(arr) / sizeof(arr[0]);

countsort(arr,n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}