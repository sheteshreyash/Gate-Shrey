#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Dynamic Memory Allocation

    //1. malloc()
    int *p = (int*)malloc(sizeof(int)); // Allocate memory for 1 integer
    *p = 10;
    printf("%d\n", *p);
    free(p); // Free the memory


    //2. calloc()
    int *q = (int*)calloc(5, sizeof(int)); // Allocate memory for 5 integers
    for (int i = 0; i < 5; i++)
    {
        q[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", q[i]);
    }
    free(q); // Free the memory


    //3. realloc()
    int *r = (int*)malloc(5 * sizeof(int)); // Allocate memory for 5 integers
    for (int i = 0; i < 5; i++)
    {
        r[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", r[i]);
    }
    r = (int*)realloc(r, 10 * sizeof(int)); // Reallocate memory for 10 integers
    for (int i = 5; i < 10; i++)
    {
        r[i] = i + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", r[i]);
    }
    free(r); // Free the memory


    //4. malloc() for 2D array
    int **s = (int**)malloc(2 * sizeof(int*)); // Allocate memory for 2 integer pointers
    for (int i = 0; i < 2; i++)
    {
        s[i] = (int*)malloc(3 * sizeof(int)); // Allocate memory for 3 integers
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            s[i][j] = i + j;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", s[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        free(s[i]); // Free the memory
    }
    free(s); // Free the memory

    
    // Passing 2D arrays as an argument to a function
    int **t = (int**)malloc(2 * sizeof(int*)); // Allocate memory for 2 integer pointers
    for (int i = 0; i < 2; i++)
    {
        t[i] = (int*)malloc(3 * sizeof(int)); // Allocate memory for 3 integers
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t[i][j] = i + j;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", t[i][j]);
        }
    }
    free(t); // Free the memory

    return 0;
}
