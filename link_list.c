#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct node
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

int main()
{
    struct node *head = NULL;
    while (1)
    {
        int ele, n;
        int user_input;
        system("cls");
        printf("Welcome to DSA link list practicals !!\n");
        printf("1.Insert element\n");
        printf("2.Traverse element\n");
        printf("3.Delete first element\n");
        printf("4.Delete specific element\n");
        printf("0.exit\n");
        printf("Enter your choice: ");
        scanf("%d", &user_input);

        switch (user_input)
        {
        case 1:
            printf("\n");
            printf("--------------------------------------------------\n");
            printf("\n");
            printf("Enter the no. of elements you want to store: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("Enter the element %d: ", i + 1);
                scanf("%d", &ele);
                head = insertbeg_ll(head, ele);
            }
            Sleep(5000);
            system("cls");
            break;
        case 2:
            printf("\n");
            printf("--------------------------------------------------\n");
            traverse_ll(head);
            Sleep(5000);
            system("cls");
            break;
        case 3:
            printf("\n");
            printf("--------------------------------------------------\n");
            printf("Deleting the first element in the linked list...\n");
            head = deletebeg_ll(head);
            Sleep(5000);
            system("cls");
            break;
        case 4:
            printf("\n");
            printf("--------------------------------------------------\n");
            printf("Enter the element you want to delete: ");
            scanf("%d", &ele);
            head = delete_ll(head, ele);
            Sleep(5000);
            system("cls");
            break;

        case 0:
            return 0;

        default:
            // printf("Enter a valid number ! \n");
            break;
        }
    }
    return 0;
}