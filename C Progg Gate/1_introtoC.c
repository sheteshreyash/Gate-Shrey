#include <stdio.h>
int main(int argc, char const *argv[])
{
    signed short int a = 10; // by default compiler uses signed int, short is 2 bytes
    // signed short int a = 65538; // prints error, range of signed short int is -32768 to 32767, unsigned short int is o to 65535
    unsigned short int b = 65535; // prints 65538
    printf("%d\n", sizeof(a));
    printf("%d\n", a); // prints 10
    printf("%d\n", b); // prints 65538

    unsigned short c = 65538;
    printf("%d\n", c); // it should print 2, because of cyclic nature of memory

    signed short d = 32768;
    printf("%d\n", d); // it should print -32768, because of cyclic nature of memory

    signed short e = -32769;
    printf("%d\n", e); // it should print 32767, because of cyclic nature of memory

    unsigned short int f = -3;
    printf("%u\n", f); // it should print 65533, because of cyclic nature of memory

    unsigned short int g = -32700;
    printf("%u\n", g); // it should print 32836, because of cyclic nature of memory

    // character system
    char ab = 65;
    printf("%d\n", ab); // prints 65
    printf("%c\n", ab); // prints A

    char cd = 129;
    printf("%d\n", cd); // prints -127, because of cyclic nature of memory
    printf("%c\n", cd); // prints �, because of cyclic nature of memory

    char ef = 258;
    printf("%d\n", ef); // prints 2, because of cyclic nature of memory
    printf("%c\n", ef); // prints STX, because of cyclic nature of memory

    return 0;
}
