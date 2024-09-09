// Various Operations on Doubly Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; // Pointer to the next node
    struct Node *prev; // Pointer to the previous node
};

void listTraversalDoublyll(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void reverseListTraversalDoublyll(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->prev;
    }
}

void freeList(struct Node *head)
{
    struct Node *temp;
    while (head)
    {
        temp = head;
        head = head->next;
        temp->next = NULL;
        temp->prev = NULL;
        free(temp);
    }
}

struct Node *insertAfterNodeDoublyll(struct Node *head, struct Node *prevNode, int data)  // Insert after a node
{
    if (prevNode == NULL)
    {
        printf("The given previous node cannot be NULL\n");
        return head;
    }
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = prevNode->next;
    newNode->prev = prevNode;
    if (prevNode->next != NULL)
    {
        prevNode->next->prev = newNode;
    }
    prevNode->next = newNode;
    return head;
}

struct Node *updateNodeAtIndex(struct Node *head, int data, int index)  // Update node at a specific index
{
    struct Node *current = head;
    for (int i = 0; i < index; ++i)
    {
        if (current == NULL)
        {
            printf("Invalid index.\n");
            return head;
        }
        current = current->next;
    }
    if (current != NULL)
    {
        current->data = data;
    }
    return head;
}

int main()
{
    struct Node *head = NULL;
    struct Node *current = NULL;
    int choice, val, index, n;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Create Doubly Linked List\n");
        printf("2. Traverse Doubly Linked List\n");
        printf("3. Reverse Traverse Doubly Linked List\n");
        printf("4. Insert Element after a Node\n");
        printf("5. Update the value of a Node at a specific index\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number of nodes: ");
            if (scanf("%d", &n) != 1)
            {
                printf("Invalid input. Exiting...\n");
                return 1;
            }
            for (int i = 0; i < n; ++i)
            {
                struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
                if (!newNode)
                {
                    printf("Memory allocation failed!\n");
                    return 1;
                }
                printf("Enter data for node %d: ", i + 1);
                scanf("%d", &newNode->data);
                newNode->next = NULL;
                newNode->prev = NULL;
                if (!head)
                {
                    head = newNode;
                    current = newNode;
                }
                else
                {
                    current->next = newNode;
                    newNode->prev = current;
                    current = newNode;
                }
            }
            break;
        case 2:
            printf("\nDoubly Linked List:\n");
            listTraversalDoublyll(head);
            break;
        case 3:
            printf("\nReverse traversal of Doubly Linked List:\n");
            if (current != NULL)
            {
                reverseListTraversalDoublyll(current);
            }
            else
            {
                printf("List is empty.\n");
            }
            break;
        case 4:
            printf("\nEnter the value to be inserted after a Node: ");
            scanf("%d", &val);
            printf("Enter index of the Node after which value is to be inserted: ");
            scanf("%d", &index);
            struct Node *prevNode = head;
            for (int i = 0; i < index; ++i)
            {
                if (prevNode == NULL)
                {
                    printf("Invalid index.\n");
                    break;
                }
                prevNode = prevNode->next;
            }
            if (prevNode != NULL)
            {
                head = insertAfterNodeDoublyll(head, prevNode, val);
                printf("\nUpdated Doubly Linked List after inserting a new node:\n");
                listTraversalDoublyll(head);
            }
            break;
        case 5:
            printf("\nEnter the new value to update at a specific index: ");
            scanf("%d", &val);
            printf("Enter the index where the value should be updated: ");
            scanf("%d", &index);
            head = updateNodeAtIndex(head, val, index);
            printf("\nUpdated Doubly Linked List after updating value at a specific index:\n");
            listTraversalDoublyll(head);
            break;
        case 6:
            freeList(head);
            return 0;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}