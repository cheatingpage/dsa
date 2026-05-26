#include <stdio.h>

// practical 1
void insertElement(int arr[], int n, int element, int position)
{
    position = position - 1;
    int i = n - 1;
    while (i >= position)
    {
        arr[i + 1] = arr[i];
        i = i - 1;
    }
    arr[position] = element;
}

void deleteElement(int arr[], int n, int position)
{
    position = position - 1;
    int item = arr[position];
    int i = position;
    while (i < n - 1)
    {
        arr[i] = arr[i + 1];
        i = i + 1;
    }
}

// practical 2
void searchElement(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            printf("the %d is at loaction %d\n", element, i + 1);
        }
    }
}

// practical 3
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

// practical 4
void insertionsort(int arr[], int n)
{
    int k = 1;
    for (k = 1; k < n; k++)
    {
        int temp = arr[k];
        int j = k - 1;
        while (temp < arr[j] & j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

// practical 5
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i];
        int loc = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                loc = j;
                if (loc != i)
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

//practical 6
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

//practical 7
struct node1
{
    int data;
    struct node *link;
};

struct node *insertbeg_ll(struct node *head, int ele)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        return head;
    }

    newNode->data = ele;
    newNode->link = NULL;
    newNode->link = head;
    head = newNode;
    return head;
}

void traverse_ll(struct node *head)
{
    struct node *temp = head;
    printf("The elements in the linked list are... ");
    while (temp != NULL)
    { 
        printf("\n%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

struct node *deletebeg_ll(struct node *head)
{
    if (head == NULL)
    {
        printf("The linked list is empty !\n");
        return head;
    }
    struct node *temp = head;
    head = temp->link;
    free(temp);
    return head;
}

struct node *delete_ll(struct node *head, int ele)
{
    if (head == NULL)
    {
        printf("The linked list is empty !\n");
        return head;
    }
    if (head->data == ele)
    {
        struct node *temp = head;
        head = temp->link;
        free(temp);
        return head;
    }
    struct node *prev = head;
    struct node *current = head->link;
    while (current != NULL)
    {
        if (current->data == ele)
        {
            prev->link = current->link;
            free(current);
            return head;
        }
        prev = current;
        current = current->link;
    }
    printf("Element not found !\n");
    return head;
}

// practical 8
struct node  
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *insertbeg_dll(struct node *head, int ele)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        return head;
    }

    newNode->data = ele;
    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL)
    {
        head->prev = newNode;
    }
    head = newNode;
    return head;
}

void traverse_dll(struct node *head)
{
    struct node *temp = head;
    printf("The elements in the linked list are... ");
    while (temp != NULL)
    {
        printf("\n%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct node *deletebeg_dll(struct node *head)
{
    if (head == NULL)
    {
        printf("The linked list is empty !\n");
        return head;
    }
    struct node *temp = head;
    head = temp->next;
    if (head != NULL)
    {
        head->prev = NULL;
    }
    free(temp);
    return head;
}

struct node *delete_dll(struct node *head, int ele)
{
    if (head == NULL)
    {
        printf("The linked list is empty !\n");
        return head;
    }
    if (head->data == ele)
    {
        struct node *temp = head;
        head = temp->next;
        free(temp);
        return head;
    }
    struct node *prev = head;
    struct node *current = head->next;
    while (current != NULL)
    {
        if (current->data == ele)
        {
            prev->next = current->next;
            free(current);
            return head;
        }
        prev = current;
        current = current->next;
    }
    printf("Element not found !\n");
    return head;
}
