#include <stdio.h>
#include "my_header.h"

static int stack[STACK_SIZE], stack_top = -1;

int main(void)
{
   int ch;

   do
   {
      printf("\n\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
      printf("\nEnter your choice : \n");
      scanf("%d", &ch);
      if (ch == 1)
         push();
      else if (ch == 2)
         pop();
      else if (ch == 3)
         display();
      else if (ch == 4)
         printf("\n**EXIT**\n");
      else
         printf("\nINVALID CHOICE\n");

   } while (ch != 4);

   return 0;
}

void push(void)
{
   int n;
   if (stack_top == (STACK_SIZE - 1))
      printf("\nSTACK IS FULL");
   else
   {
      printf("\nEnter data : ");
      scanf("%d", &n);
      stack[++stack_top] = n;
   }
}

void pop(void)
{

   if (stack_top == -1)
      printf("\nSTACK IS EMPTY");
   else
   {
      printf("\nDATA : %d", stack[stack_top--]);
   }
}

void display(void)
{
   int i;

   if (stack_top == -1)
      printf("\nSTACK IS EMPTY");
   else
   {
      printf("\nCONTENTS OF STACK : \n");
      for (i = 0; i <= stack_top; i++)
         printf("%d\t", stack[i]);
   }
}
