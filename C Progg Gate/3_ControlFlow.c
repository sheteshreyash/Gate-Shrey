#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Control flow statement in C

    // (1) Selection Statements
    // 1.1) if statement
    int a1 = 10;
    if (a1 > 5)
    {
        printf("a1 is greater than 5\n");
    }

    // 1.2) if-else statement
    int a2 = 10;
    if (a2 > 5)
    {
        printf("a2 is greater than 5\n");
    }
    else
    {
        printf("a2 is less than or equal to 5\n");
    }

    // 1.3) if-else-if statement
    int a3 = 10;
    if (a3 > 5)
    {
        printf("a3 is greater than 5\n");
    }
    else if (a3 < 5)
    {
        printf("a3 is less than 5\n");
    }
    else
    {
        printf("a3 is equal to 5\n");
    }

    // 1.4) Nested if-else statement
    int a4 = 10;
    if (a4 > 5)
    {
        if (a4 < 15)
        {
            printf("a4 is between 5 and 15\n");
        }
    }




    // (2) Iteration Statements
    // 2.1) for loop
    for (int i1 = 0; i1 < 5; i1++)
    {
        printf("i1 = %d\n", i1);
    }

    // for loop examples
    // 1. Print numbers from 1 to 10
    for (int i2 = 1; i2 <= 10; i2++)
    {
        printf("%d ", i2);
    }

    // 2. Print sum of n natural numbers
    int n = 10, sum = 0;
    for (int i3 = 1; i3 <= n; i3++)
    {
        sum += i3;
    }
    printf("\nSum of first %d natural numbers = %d\n", n, sum);

    // 3. Print factorial of a number
    int num = 5, fact = 1;
    for (int i4 = 1; i4 <= num; i4++)
    {
        fact *= i4;
    }
    printf("Factorial of %d = %d\n", num, fact);

    // 4. all three expressions in for loop are optional
    int i5 = 0;
    for (; i5 < 5;)
    {
        printf("i5 = %d\n", i5);
        i5++;
    }

    // 5. Infinite loop
    // for (;;)
    // {
    //     printf("Infinite loop\n");
    // }

    // 6. Middle expression in for loop is optional but if you omit, computer will consider it as true which is non-zero
    // int i6 = 0;
    // for (i6 = 0;; i6++)
    // {
    //     printf("i6 = %d\n", i6);
    // }

    // eg1 for-loop
    for (int i7 = 1; i7 <= 10;printf("%d\n", i7++)) {
        ;
    }  // prints 1 to 10

    // eg2 for-loop
    // for (printf("1"); printf("2"); printf("4")) {
    //     printf("3");
    // }  // prints 1234234234... infinite loop

    // eg3 for-loop
    // for (; printf("0");printf("4")) {
    //     printf("3");
    // }  // prints 034 infinite loop0

    // eg4 for-loop
    // char i9 = 1;
    // for (; i9; i9=i9+2) {
    //     printf("shete\n");
    // }  // prints shete infinite loop

    // eg5 for-loop
    for (int i11 = 1; i11 <= 10; i11++) {
        if(i11%4==0)
        break;
        printf("%d\n", i11);
    }  // prints 1 2 3 and breaks the entire loop

    // eg6 for-loop [continue]
    for (int i12 = 1; i12 <= 10; i12++) {
        if(i12%3==0)
        continue;
        printf("%d\n", i12);
    }  // prints 1 2 4 5 7 8 10
    // continue statement skips the current iteration and continues with the next iteration of the loop


    // 2.1.1) Independent for loop
    // eg7 for-loop
    for (int i13 = 1; i13 <= 3;i13++) {
        for(int j13 = 1; j13 <= 4; j13++) {
            printf("%d%d\n", i13, j13);
        }
    }  // prints 11 12 13 14 21 22 23 24 31 32 33 34

    // eg8 for-loop
    for (int i14 = 1; i14 <= 4; i14++) {
        for(int j14 = 1; j14 <= 3; j14++) {
            printf("shete\n");
        }
    }  // prints shete 12 times

    // eg9 for-loop
    // int n;
    // for (int i15; i15 <= n; i15=i15*2) {
    //     printf("shete\n");
    // }  // loop will run ((logn base 2) + 1) times where n is the input number

    // eg10 for-loop
    // int n2;
    // for (int i16; i16 <= n2; i16=i16*2) {
    //     printf("shete\n");
    // }  // loop will run ((logn base 3) + 1) times where n is the input number

    // eg11 for-loop
    // int n3;
    // for (int i17 = 1; i17 <=n3; i17++) {
    //     for (int j17 = 1; j17 <= n3; j17= j17*2) {
    //         printf("shete\n");
    //     }
    // }  // loop will execute [n * ((logn base 2) + 1)] times

    // eg12 for-loop
    // int n4;
    // for (int i18 = 1; i18 <=n4; i18=i18*2) {
    //     for (int j18 = 1; j18 <= n4; j18= (j18*2)) {
    //         printf("shete\n");
    //     }
    // }  // loop will execute [((logn base 2) + 1)^2] times


    // 2.1.2) Nested for-loop/ Dependent for-loop
    // eg13 for-loop
    // for (int i13=1; i13 <= 10; i13++) {
    //     for (int j13 = 1; j13 <= i13; j13++) {
    //         printf("shreyash\n");   // loop will run 55 times due to nested loop
    //     }
    // }

    // eg14 for-loop
    // int n14;
    // for (int i14 = 1; i14 <= n14; i14++)
    // {
    //     for (int j14 = 1; j14 <= i14; j14++) {
    //         printf("shreyash\n");
    //     }
    // }   // loop will run [(n * (n+1))/2] times due to nested loop

    // eg15 for-loop
    // int n15;
    // for (int i15 = 1; i15 <= n15; i15++) {
    //     for (int j15 = 1; j15 <= (i15 * 2); j15++) {
    //         printf("shreyashShete\n");
    //     }
    // }    // shreyashShete will be printed [n/2 * (n+3)] times


    // 2.2) while loop
    int i19 = 0;
    while (i19 < 5)
    {  // while loop will run until the condition is true
        printf("i19 = %d\n", i19);
        i19++;
    }


    // all the expressions in while loop programs are mandatory and if you omit any of them, it will throw an error
    // while all the expressions in for loop are optional and if you omit any of them, it will not throw an error
    // 2.3) do-while loop
    int i20 = 0;
    do
    {  // do-while loop will run at least once
        printf("i20 = %d\n", i20);
        i20++;
    } while (i20 < 5);
    // do while run mostly uses in menu driven programs0


    return 0;
}


