#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);  // Read input number

    // For negative numbers, print the sign first
    if (num < 0) {
        printf("-");
        num = -num;  // Make the number positive for the conversion
    }

    int binary[32];  // Array to store binary digits
    int i = 0;

    // Special case for zero
    if (num == 0) {
        printf("0");
    } else {
        while (num > 0) {
            binary[i++] = num % 2;  // Store the remainder (0 or 1)
            num = num / 2;  // Divide by 2
        }

        // Print binary digits in reverse order
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }

    printf("\n");
    return 0;
}
