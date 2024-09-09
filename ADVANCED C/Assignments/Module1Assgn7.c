// Implementation of Stack using Array with push(), pop() and peek() operations

#include <stdio.h>
#include <stdlib.h>

typedef struct Stack // this is a stack structure consist of array size, top value and pointer to array
{
    int *arr;  // pointer to array
    int top;
    int capacity;
} Stack;

Stack *createStack(int capacity)  // this function is used to create a stack with given capacity
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->arr = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

int isFull(Stack *stack)  // stack full condition
{
    return stack->top == stack->capacity - 1;
}

int isEmpty(Stack *stack)  // stack empty condition
{
    return stack->top == -1;
}

void push(Stack *stack, int item)  // push operation
{
    if (isFull(stack))
    {
        printf("Stack overflow. Cannot push %d\n", item);
        return;
    }
    stack->arr[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

int pop(Stack *stack)  // pop operation
{
    if (isEmpty(stack))
    {
        printf("Stack underflow. Cannot pop\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

int stackTop(Stack *stack)  // top element of stack
{
    if (isEmpty(stack))
    {
        printf("Stack is empty. No top element\n");
        return -1;
    }
    return stack->arr[stack->top];
}

int stackBottom(Stack *stack)  // bottom element of stack
{
    if (isEmpty(stack))
    {
        printf("Stack is empty. No bottom element\n");
        return -1;
    }
    return stack->arr[0];
}

void printStack(Stack *stack)  // print stack elements
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= stack->top; i++)
    {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}

int main()
{
    int capacity, choice, element;
    printf("Enter the capacity of the stack: ");
    scanf("%d", &capacity);

    Stack *s = createStack(capacity);

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print Stack\n");
        printf("4. Top and Bottom of the Stack\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to push: ");
            scanf("%d", &element);
            push(s, element);
            printStack(s); // Updated stack
            break;
        case 2:
            element = pop(s);
            if (element != -1)
            {
                printf("Popped element: %d\n", element);
            }
            printStack(s); // Updated stack
            break;
        case 3:
            printStack(s);
            break;
        case 4:
            printf("\n4) Top and Bottom of the stack..");
            printf("\nTop Element of the Stack: %d\n", stackTop(s));
            printf("Bottom Element of the Stack: %d\n", stackBottom(s));
            break;
        case 5:
            free(s->arr);
            free(s);
            s = NULL;
            return 0;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}