#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 5.Wap to copy bit no 3,4,5 from one character variable,
    to bit no 5,6,7 respectively of another character variable */

    unsigned char src = 0x3C;  // Example source variable (00111100 in binary) // 60 in decimal
    unsigned char dest = 0x00; // Example destination variable (00000000 in binary)

    // Extract bits 3, 4, 5 from src
    unsigned char extracted_bits = (src & (0x07 << 3)) >> 3;

    // Clear bits 5, 6, 7 in dest
    dest &= ~(0x07 << 5);  // padding 0s in bits 5, 6, 7

    // Set bits 5, 6, 7 in dest with extracted bits
    dest |= (extracted_bits << 5);

    printf("Source: 0x%x\n", src);
    printf("Destination: 0x%x\n", dest);

    return 0;
}