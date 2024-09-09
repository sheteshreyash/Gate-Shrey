#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i = 0, n = 0, *p = NULL;

  printf("\nhow many numbers you want to store : ");
  scanf("%d", &n);
  p = (int *)calloc(n, sizeof(int)); // p = (int*)malloc(n*sizeof(int));
  if (p)
  {
    printf("\nmemory block allocated at %p\n", p);
    printf("\nenter %d numbers : ", n);
    for (i = 0; i < n; i++, p++)
      scanf("%d", p);

    p -= n; // getting the pointer back to the starting address of block

    printf("\nyou entered : \n");
    for (i = 0; i < n; i++, p++)
      printf("%d\t", *p);

    p -= n; // getting the pointer back to the starting address of block

    printf("\nreleasing the memory\n");
    free(p);
  }
  else
    printf("\nmemory not available \n");

  return 0;
}
