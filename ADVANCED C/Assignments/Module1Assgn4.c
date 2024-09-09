#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 4.Wap to reset 3rd and 17th bit of int variable without affecting other bits */
    
    unsigned int num = 0xFFFFFFFF; // Example integer variable with all bits set
    num &= ~(1 << 3);              // Reset the 3rd bit
    num &= ~(1 << 17);             // Reset the 17th bit

    printf("Number with 3rd and 17th bits reset: 0x%x\n", num);

    return 0;
}