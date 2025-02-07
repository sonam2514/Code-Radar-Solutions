#include <stdio.h>

int countLeadingZeros(int n) {
    if (n == 0) return 32;  // Special case: All bits are zero

    int count = 0;
    for (int i = 31; i >= 0; i--) {  // Check bits from MSB to LSB
        if (n & (1 << i)) break;
        count++;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);  // Read input

    printf("%d\n", countLeadingZeros(num));  // Print leading zero count
    return 0;
}
