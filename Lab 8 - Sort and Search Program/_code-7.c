//WAP TO SORT AN ARRAY USING QUICK SORT
#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int low, int high);

void quicksort(int *arr, int low, int high)
{
    if (low < high) {
        int index = partition(arr, low, high);
        quicksort(arr, low, index - 1);
        quicksort(arr, index, high);
    }
}

int partition(int *arr ,int low,int high){
    int mid=(low+high)/2;
    int pivot = arr[mid];
    int i=low,j=high;
    while(i<=j){
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }

        if (i <= j) {
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        
    }
    }
    return i;
}
int main()
{
    int arr[] = {8, 7, 5, 8, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}