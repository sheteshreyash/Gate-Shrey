#include <stdio.h>

int main()
{
  int i, j, abc[] = {1, 2, 3, 4, 5}, xyz[] = {10, 20, 30, 40, 50};
  int *arr_ptr[] = {abc, xyz};

  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 5; j++)
      printf("%d ", *(arr_ptr[i] + j));

    printf("\n");
  }

  return 0;
}
