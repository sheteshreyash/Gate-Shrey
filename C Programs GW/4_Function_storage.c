#include <stdio.h>

    void fun1() {
    static int a1 = 1;
    a1++;
    printf("The value of a1 is %d\n", a1);
    }  // value of a1 will be 2, 3, 4 every time it is called because of static storage class which will retain the value of a1

    void fun2() {
    int a2 = 1;
    a2++;
    printf("The value of a1 is %d\n", a2);
    }   // value of a2 will be 2 every time it is called because of auto storage class


    //2.4 extern storage class
    int d; // default value of extern is 0



    // example of extern storage class
    void funEx1() {
        extern int ex1;   // extern is used to declare a variable that is declared somewhere else in the program
        ex1++;
        printf("The value of ex1 is %d\n", ex1);
    }
    int ex1;  // memory of ex1 is allocated here
    void funEx2() {
        ex1++;
        printf("The value of ex1 is %d\n", ex1);
    }
// extern storage class is used to declare a variable that is declared somewhere else in the program
// extern variable can be used in multiple files across the system and it is used to declare a global variable in one file which is defined in another file
// we can use static variables as extern variables but the scope of static variables is limited to the file in which they are declared




    int main(int argc, char const *argv[])
    {
        // Function and storage in C
        // 1. Function
        int mul(int a, int b) {
            return a * b;
        };
        printf("The multiplication of 3 and 4 is %d\n", mul(3, 4));

        // 2. Storage
        // 2.1 auto storage class
        auto int a5 = 4;
        printf("The value of a is %d\n", a5);

        // eg of auto storage class
        fun2();
        fun2();
        fun2();

        // 2.2 register storage class
        register int b8 = 5;
        printf("The value of b is %d\n", b8);

        // 2.3 static storage class
        static int c = 6;
        printf("The value of c is %d\n", c);

        // eg. of static storage class
        fun1();
        fun1();
        fun1();

        // printing value of extern storage class
        printf("The value of d is %d\n", d);

        // example of extern storage class
        ++ex1;
        printf("The value of ex1 is %d\n", ex1);

        return 0;
}
