#include <stdio.h>
#include <stdlib.h>

struct student
{
  char name[20];
  int roll;
  float marks;
  struct student *next;
} *head = NULL;

void add_node(void);
void display_all(void);
void display_node(void);
void delete_node(void);
void edit_node(void);
void delete_all(void);

int main(void)
{
  int ch;

  do
  {
    printf("\n\n1.ADD NODE\n2.DISPLAY NODE\n3.DISPLAY ALL\n4.EDIT NODE\n5.DELETE NODE       \n6.DELETE ALL\n7.INSERT NODE\n8.EXIT\n");

    printf("\nEnter your choice : \n");
    scanf("%d", &ch);

    switch (ch)
    {

    case 1:
      add_node();
      break;
    case 2:
      display_node();
      break;
    case 3:
      display_all();
      break;
    case 4:
      edit_node();
      break;
    case 5:
      delete_node();
      break;
    case 6:
      delete_all();
      break;
      /*  case 7:    insert_node();
                     break;               */
    case 8:
      printf("***EXIT***");
      break;
    default:
      printf("invalid choice");
      break;
    }

  } while (ch != 8);

  return 0;
}

void add_node()
{
  struct student *p = NULL, *t = NULL;

  p = (struct student *)malloc(sizeof(struct student));

  if (!p)
    printf("\nMemory is Not Available,Try Again Later\n");
  else
  {
    printf("\nenter name,roll no & marks :  ");
    scanf("%s%d%f", p->name, &p->roll, &p->marks);
    p->next = NULL;

    if (!head)
      head = p;
    else
    {
      for (t = head; t->next; t = t->next)
        ;
      t->next = p;
    }
  }
}

void display_all()
{
  struct student *t = NULL;

  if (!head)
    printf("\nNo Record is Available To Display\n");
  else
  {
    for (t = head; t; t = t->next)
    {
      printf("\n%s\t%d\t%.2f", t->name, t->roll, t->marks);
    }
  }
}

void display_node()
{
  int n = 0;
  struct student *t = NULL;

  if (!head)
    printf("\nNo Record is Available To Display\n");
  else
  {

    printf("\nenter roll number : ");
    scanf("%d", &n);

    for (t = head; t && t->roll != n; t = t->next)
      ;

    if (!t)
      printf("\nThis roll number is not present in records\n");
    else
      printf("\nDetails of the student :\n\n%s\t%d\t%.2f", t->name, t->roll, t->marks);
  }
}

void edit_node()
{
  int n = 0;
  struct student *t = NULL;

  if (!head)
    printf("\nNo Record is Available \n");
  else
  {

    printf("\nenter roll number to be edited : ");
    scanf("%d", &n);

    for (t = head; t && t->roll != n; t = t->next)
      ;

    if (!t)
      printf("\nThis roll number is not present in records\n");
    else
    {
      printf("\nDetails of the student :\n\n%s\t%d\t%.2f", t->name, t->roll, t->marks);
      printf("\nenter new details\n");
      printf("\nenter name,roll no & marks :  ");
      scanf("%s%d%f", t->name, &t->roll, &t->marks);
      printf("\nRecord Updated\n");
    }
  }
}

void delete_node()
{
  char ch;
  int n = 0;
  struct student *t = NULL, *prev = NULL;

  if (!head)
    printf("\nNo Record is Available \n");
  else
  {

    printf("\nenter roll number whose record is to be deleted:  ");
    scanf("%d", &n);

    for (t = head; t && t->roll != n; t = t->next)
      ;

    if (!t)
      printf("\nThis roll number is not present in records\n");
    else
    {
      printf("\nFollowing record will be deleted !!");
      printf("\nDetails of the student :\n\n%s\t%d\t%.2f", t->name, t->roll, t->marks);

      printf("\nare you sure,you want to delete (y/n)? :  ");
      scanf(" %c", &ch);
      if (ch == 'y' || ch == 'Y')
      {
        if (head == t)
        {
          head = t->next;
          free(t);
          printf("\nRecord Deleted\n");
        }
        else
        {
          for (prev = head; prev->next != t; prev = prev->next)
            ;
          prev->next = t->next;
          free(t);
          printf("\nRecord Deleted\n");
        }
      }
    }
  }
}

void delete_all()
{
  char ch;
  struct student *t = NULL;

  if (!head)
    printf("\nNo Record is Available\n");
  else
  {
    display_all();
    printf("\nare you sure,you want to delete all records (y/n)? :  ");
    scanf(" %c", &ch);
    if (ch == 'y' || ch == 'Y')
    {
      for (t = head; t; t = head)
      {
        head = t->next;
        free(t);
      }
      printf("\nRecords Deleted\n");
    }
  }
}
