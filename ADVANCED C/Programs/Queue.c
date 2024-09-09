#include <stdio.h>
#include "my_header.h"

static int queue[QUEUE_SIZE], front = -1, rear = -1;

int main(void)
{
   int ch;

   do
   {
      printf("\n\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
      printf("\nEnter your choice : \n");
      scanf("%d", &ch);
      if (ch == 1)
         enqueue();
      else if (ch == 2)
         dequeue();
      else if (ch == 3)
         display();
      else if (ch == 4)
         printf("\n**EXIT**\n");
      else
         printf("\nINVALID CHOICE\n");

   } while (ch != 4);

   return 0;
}

void enqueue(void)
{
   int n;
   if (rear == (QUEUE_SIZE - 1))
      printf("\nQUEUE IS FULL");
   else
   {
      if (front == -1 && rear == -1)
         front++;
      printf("\nEnter data : ");
      scanf("%d", &n);
      queue[++rear] = n;
   }
}

void dequeue(void)
{

   if ((rear == -1 && front == -1) || (front > rear))
      printf("\nQUEUE IS EMPTY");
   else
   {
      printf("\nDATA : %d", queue[front++]);
   }
}

void display(void)
{
   int i;

   if ((rear == -1 && front == -1) || (front > rear))
      printf("\nQUEUE IS EMPTY");
   else
   {
      printf("\nCONTENTS OF QUEUE : \n");
      for (i = front; i <= rear; i++)
         printf("%d\t", queue[i]);
   }
}
