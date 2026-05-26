#include<stdio.h>

void selection_sort(int arr[] , int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min = arr[i];
        int loc = i;
        for(int j=i+1; j<n;j++){
            if (arr[j]<min){
                min=arr[j];
                loc=j;
                if(loc != i){
                    int temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
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

    selection_sort(arr, n);
    for ( int k = 0; k < n; k++)
    {
        printf("Sorted element %d \n", arr[k]);
    }

    printf("\n");

    return 0;
}
