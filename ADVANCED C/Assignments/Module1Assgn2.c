#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 2.Wap a program to swap lower & upper nibble of hexadecimal number
    (stored in a character variable). */

    unsigned char c = 0x6A;
    unsigned char swapped = ((c & 0x0F) << 4) | ((c & 0xF0) >> 4);

    printf("Original nibble: 0x%x\n", c);
    printf("Swapped nibble: 0x%x\n", swapped);

    return 0;
}