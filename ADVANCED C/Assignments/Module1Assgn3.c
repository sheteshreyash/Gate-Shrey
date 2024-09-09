#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 3.Wap to set 28th bit of integer variable without affecting other bits */

    unsigned int num = 0x0;      // Example integer variable
    unsigned int mask = 1 << 28; // Mask with only the 28th bit set
    num = num | mask; // Set the 28th bit
    // num |= 1 << 28;   // Another Method

    printf("Number with 28th bit set: 0x%x\n", num);

    return 0;
}