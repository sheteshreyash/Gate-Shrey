#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
};

// Function prototypes
void insertAtBeginning(struct Node **head_ref, int new_data);
void insertAtEnd(struct Node **head_ref, int new_data);
void deleteNode(struct Node **head_ref, struct Node *del);
void displayList(struct Node *node);

int main()
{
  struct Node *head = NULL;
  int ch, data;

  do
  {
    printf("\n\n1. Insert at Beginning\n2. Insert at End\n3. Delete Node\n4. Display List\n9. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      printf("Enter data to insert at beginning: ");
      scanf("%d", &data);
      insertAtBeginning(&head, data);
      break;
    case 2:
      printf("Enter data to insert at end: ");
      scanf("%d", &data);
      insertAtEnd(&head, data);
      break;
    case 3:
      printf("Enter data of the node to delete: ");
      scanf("%d", &data);
      struct Node *temp = head;
      while (temp != NULL && temp->data != data)
      {
        temp = temp->next;
      }
      if (temp != NULL)
      {
        deleteNode(&head, temp);
      }
      else
      {
        printf("Node not found.\n");
      }
      break;
    case 4:
      displayList(head);
      break;
    case 9:
      printf("***EXIT***\n");
      break;
    default:
      printf("Invalid choice\n");
      break;
    }
  } while (ch != 9);

  return 0;
}

// Function to insert a node at the beginning of the doubly linked list
void insertAtBeginning(struct Node **head_ref, int new_data)
{
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = (*head_ref);
  new_node->prev = NULL;

  if ((*head_ref) != NULL)
  {
    (*head_ref)->prev = new_node;
  }

  (*head_ref) = new_node;
}

// Function to insert a node at the end of the doubly linked list
void insertAtEnd(struct Node **head_ref, int new_data)
{
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  struct Node *last = *head_ref;

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head_ref == NULL)
  {
    new_node->prev = NULL;
    *head_ref = new_node;
    return;
  }

  while (last->next != NULL)
  {
    last = last->next;
  }

  last->next = new_node;
  new_node->prev = last;
}

// Function to delete a node in the doubly linked list
void deleteNode(struct Node **head_ref, struct Node *del)
{
  if (*head_ref == NULL || del == NULL)
  {
    return;
  }

  if (*head_ref == del)
  {
    *head_ref = del->next;
  }

  if (del->next != NULL)
  {
    del->next->prev = del->prev;
  }

  if (del->prev != NULL)
  {
    del->prev->next = del->next;
  }

  free(del);
}

// Function to display the doubly linked list
void displayList(struct Node *node)
{
  struct Node *last;
  printf("\nTraversal in forward direction:\n");
  while (node != NULL)
  {
    printf("%d ", node->data);
    last = node;
    node = node->next;
  }

  printf("\nTraversal in reverse direction:\n");
  while (last != NULL)
  {
    printf("%d ", last->data);
    last = last->prev;
  }
}