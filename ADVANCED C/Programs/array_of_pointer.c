#include <stdio.h>

int main()
{

  int i = 0;
  char *arr_ptr[] = {"hello", "welcome"};

  char abc[] = "hi", xyz[] = "how are you";
  char *str_ptr[] = {abc, xyz};

  while (i < 2)
  {
    printf("\n%s\n", arr_ptr[i]);
    i++;
  }
  i = 0;
  while (i < 2)
  {
    printf("\n%s\n", str_ptr[i]);
    i++;
  }
  return 0;
}
