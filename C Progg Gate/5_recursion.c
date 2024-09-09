#include <stdio.h>

    // Eg 1
    void printnum(int n) {
        if(n ==1)
            printf("Shete");
            else {
                printf("Shreyash");
                printnum(n - 1);
            }
    }

    // Eg 2
    int sumofdigits(int n) {
        if(n == 0)
            return 0;
        return (n % 10 + sumofdigits(n / 10));
    }

    // Eg 3
    int power(int base, int exp) {
        if(exp == 0)
            return 1;
        return (base * power(base, exp - 1));
    }

    // Eg 4
    void fun4(int n) {
        if(n <1) {
            return;
        } else {
            fun4(n - 1);
            printf("%d ", n);
            fun4(n - 1);
        }
    }

    // Eg 5
    void fun5(int n) {
        if(n <1)
            return;
            else {
                printf("%d ", n);
                fun5(n - 1);
                printf("%d ", n);
            }
    }

    // Eg 6
    // Binary to decimal conversion using recursion
    int binaryToDecimal(int n) {
        if(n == 0)
            return 0;
        return (n % 10 + 2 * binaryToDecimal(n / 10));
    }

    // Eg 7
    // addition of two numbers using recursion
    int add(int a, int b) {
        if(b == 0)
            return a;
        return add(a ^ b, (a & b) << 1);
    }

    // Eg 8
    // multiplication of two numbers using recursion
    int multiply(int a, int b) {
        if(b == 0)
            return 0;
        return a + multiply(a, b - 1);
    }

int main(int argc, char const *argv[])
{
    // Recursion in C
    // Recursion is a process in which a function calls itself as a subroutine. This allows the function to be repeated several times, since it calls itself during its execution.
    // Eg 1
    printnum(5);

    // print sum of digits eg. ip: 123, op: 6
    // Eg 2
    printf("\nThe sum of digits is %d", sumofdigits(123));

    // print power of a number eg. ip: 2, 3, op: 8
    // Eg 3
    int result = power(2, 3);
    printf("\nThe power of 2 raised to 3 is %d\n", result);

    // Eg 4
    fun4(3);
    printf("\n");

    // Eg 5
    fun5(3);
    printf("\n");

    // Eg 6
    // Binary to decimal conversion using recursion
    printf("The binary to decimal conversion of 1010 is %d\n", binaryToDecimal(1010));

    // Eg 7
    // addition of two numbers using recursion
    printf("The addition of 5 and 3 is %d\n", add(5, 3));

    // Eg 8
    // multiplication of two numbers using recursion
    printf("The multiplication of 5 and 3 is %d\n", multiply(5, 3));

    return 0;
}
