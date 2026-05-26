#include <stdio.h>

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j < end; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[end];
    arr[end] = temp;
    return i + 1;
}

void quicksort(int arr[], int start , int end){
    if (start < end)
    {
        int pivot = partition(arr, start, end);
        quicksort(arr, start, pivot - 1);
        quicksort(arr, pivot + 1, end);
    }
}


int main()
{
    int arr[20], n;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("\n");

    for(int k=0;k<n; k++){
        printf("Enter the %d element: ", k+1);
        scanf("%d",&arr[k]);
        
    }
    printf("\n");
    quicksort(arr, 0, n - 1);
    for ( int k = 0; k < n; k++)
    {
        printf("Sorted element %d \n", arr[k]);
    }

    printf("\n");

    return 0;
}
