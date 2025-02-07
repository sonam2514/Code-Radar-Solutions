#include <stdio.h>

unsigned int flipBits(unsigned int num) {
    unsigned int flipped = 0;
    for (int i = 0; i < 32; i++) {  // Iterate over 32 bits
        flipped |= ((num >> i) & 1) << (31 - i);  // Flip each bit and shift it into the new number
    }
    return flipped;
}

int main() {
    unsigned int num;
    scanf("%u", &num);  // Read input

    printf("%u\n", flipBits(num));  // Flip all bits and print the result
    return 0;
}

