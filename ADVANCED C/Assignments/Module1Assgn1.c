#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 1.Wap to unpack nibbles of character variable c,
    store lower nibble of c at lower nibble of character variable d &
    higher nibble of c at lower nibble of character variable e.
    (***variable c & higher nibble of variable d & e should be unaffected) */

    unsigned char c = 0x5A;
    unsigned char d = 0x00;
    unsigned char e = 0x00;

    d = (d & 0xF0) | (c & 0x0F);        // Preserve higher nibble of d, set lower nibble
    e = (e & 0xF0) | ((c & 0xF0) >> 4); // Preserve higher nibble of e, set lower nibble

    printf("c = %x\n", c);  // Integer value in hexadecimal
    printf("d = %x\n", d);
    printf("e = %x\n", e);

    return 0;
}