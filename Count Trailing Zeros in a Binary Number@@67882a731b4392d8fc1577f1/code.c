#include <stdio.h>

int countTrailingZeros(int n) {
    if (n == 0) return 32;  // Special case: All bits are zero

    int count = 0;
    while ((n & 1) == 0) {  // Check LSB until a '1' is found
        count++;
        n >>= 1;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);  // Read input

    printf("%d\n", countTrailingZeros(num));  // Print trailing zero count
    return 0;
}
