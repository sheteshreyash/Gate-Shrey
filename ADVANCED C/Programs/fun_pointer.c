#include <stdio.h>

int add(int, int);
int sub(int, int);
void fun(int (*)(int, int));

void main()
{
  fun(add);
  fun(sub);
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
void fun(int (*p)(int, int))
{
  int a = 5, b = 3, r;

  r = (*p)(a, b);
  printf("\nresult = %d", r);
}
