#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);  // Read input

    printf("%u\n", ~num);  // Flip all bits and print result
    return 0;
}
