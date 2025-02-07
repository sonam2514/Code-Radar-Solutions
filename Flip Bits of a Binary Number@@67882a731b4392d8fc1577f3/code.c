#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);  // Read input

    printf("%d\n", ~num);  // Flip the bits and add 1 to convert to negative
    return 0;
}
