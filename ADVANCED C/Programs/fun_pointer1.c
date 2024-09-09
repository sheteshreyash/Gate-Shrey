#include <stdio.h>

int add(int, int);
int sub(int, int);

void main()
{
  int i;
  int (*arr[])(int, int) = {add, sub};

  for (i = 0; i < 2; i++)
    printf("\nresult = %d", arr[i](10, 5));
}

int add(int x, int y)
{
  int z;

  z = x + y;
  return z;
}
int sub(int x, int y)
{
  int z;

  z = x - y;
  return z;
}
