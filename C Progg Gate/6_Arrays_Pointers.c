#include <stdio.h>

int main(int argc, char const *argv[])
{
    //1. Arrays
    int arr[5] = {1, 2, 3, 4, 5};
    printf("arr[0] = %d\n", arr[0]);
    printf("%u\n", &arr[0]); // Address of arr[0] which is address of arr
    printf("%u\n", arr); // Address of arr[0] which is address of arr

    // int b;
    // printf("%d\n", b); // Garbage value

    //1.1 1D Array
    int arr1[5] = {1, 2, 3, 4, 5};
    int *p = arr1;
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    printf("%d\n", *(p+2));
    printf("%d\n", *(p+3));
    printf("%d\n", *(p+4));
    printf("%d\n", *(p + 5)); // garbage value


    //1.2 2D Array
    int arr2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *q = (int*)arr2; // Cast the 2D array to int pointer
    printf("%d\n", *q);
    printf("%d\n", *(q+1));
    printf("%d\n", *(q+2));
    printf("%d\n", *(q+3));
    printf("%d\n", *(q+4));
    printf("%d\n", *(q+5));

    //1.3 Array of Pointers
    int a = 10, b = 20, c = 30;
    int *arr3[3] = {&a, &b, &c};
    printf("%d\n", *arr3[0]);
    printf("%d\n", *arr3[1]);
    printf("%d\n", *arr3[2]);

    // Arrays and Pointers are equivalent

    //2. Pointers
    int x = 1000;
    int *p1 = &x;
    int **p2 = &p1;  // Typecasting of pointer
    printf("%d\n", *p1);
    printf("%d\n", *(int*)p2);




    return 0;
}
