#include <stdio.h>

void binary_search(int arr[], int n, int ele)
{
    int lb = 0, ub = n - 1;

    while (lb <= ub)
    {
        int mid = (lb + ub) / 2;

        if (arr[mid] == ele)
        {
            printf("Element found at location %d", mid + 1);
            return;
        }

        if (ele < arr[mid])
        {
            ub = mid - 1;
        }
        else
        {
            lb = mid + 1;
        }
    }

    printf("Element not found");
}

void bubble_sort(int arr[], int n)
{
    for (int p = 0; p < n - 1; p++)
    {
        for (int i = 0; i < n - 1 - p; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[20], n, ele;

    printf("Enter the number of element : ");
    scanf("%d", &n);

    printf("\n");

    for (int k = 0; k < n; k++)
    {
        printf("Enter the %d element: ", k + 1);
        scanf("%d", &arr[k]);
    }
    printf("\n");

    bubble_sort(arr, n);
    printf("Elements after sorted  are ...\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d Array elements are %d\n", i + 1, arr[i]);
    }
    
    printf("Enter the element you want to search : ");
    scanf("%d", &ele);
    binary_search(arr, n, ele);

    return 0;
}