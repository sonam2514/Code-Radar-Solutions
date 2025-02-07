#include <stdio.h>

int main() {
    int n, pos = 0;
    scanf("%d", &n);  // Take input

    if (n == 0) {
        printf("-1\n");  // Special case: No set bit in 0
        return 0;
    }

    while ((n & 1) == 0) {  // Shift right until we find a set bit
        n >>= 1;
        pos++;
    }

    printf("%d\n", pos);  // Print position of lowest set bit

    return 0;
}
