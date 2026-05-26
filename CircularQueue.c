#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Function to insert element
void enqueue(int value)
{
    if ((rear + 1) % SIZE == front)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
            front = 0;

        rear = (rear + 1) % SIZE;
        queue[rear] = value;

        printf("%d inserted into queue\n", value); 
    }
}

// Function to delete element
void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("%d deleted from queue\n", queue[front]);

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE;
        }
    }
}

// Function to display queue
void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Circular Queue elements are: ");

        i = front;
        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % SIZE;
        }

        printf("%d\n", queue[rear]);
    }
}

// Main function
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    dequeue();
    dequeue();

    display();

    enqueue(50);
    enqueue(60);

    display();

    enqueue(70); // Demonstrates overflow

    return 0;
}