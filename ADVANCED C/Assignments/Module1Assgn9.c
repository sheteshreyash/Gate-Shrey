// Program to implement Stack using doubly Linked list

#include <stdio.h>
#include <stdlib.h>

struct Node  //self referential structure
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *top = NULL; // top should be declared globally

void push(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode)
    {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = data;
    newNode->next = top;
    newNode->prev = NULL;
    if (top != NULL)
    {
        top->prev = newNode;
    }
    top = newNode;
    printf("%d pushed to stack\n", data);
}

int pop()
{
    if (top == NULL)
    {
        printf("Stack underflow. Cannot pop\n");
        return -1;
    }
    int data = top->data;
    struct Node *temp = top;
    top = top->next;
    if (top != NULL)
    {
        top->prev = NULL;
    }
    free(temp);
    return data;
}

int peek()
{
    if (top == NULL)
    {
        printf("Stack is empty. No top element\n");
        return -1;
    }
    return top->data;
}

void stackTraversal()
{
    struct Node *ptr = top;
    if (ptr == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeMemory()
{
    struct Node *temp;
    while (top)
    {
        temp = top;
        top = top->next;
        free(temp);
    }
}

int main()
{
    int choice, element;

    do
    {
        printf("\nStack Using Doubly Linked list:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Print Stack\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to push: ");
            scanf("%d", &element);
            push(element);
            break;
        case 2:
            element = pop();
            if (element != -1)
            {
                printf("Element %d popped from the stack.\n", element);
            }
            break;
        case 3:
            element = peek();
            if (element != -1)
            {
                printf("Top element is: %d\n", element);
            }
            break;
        case 4:
            printf("\nStack elements:\n");
            stackTraversal();
            break;
        case 5:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 5);

    freeMemory();
    return 0;
}