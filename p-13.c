//Write a program in c calculate bytes to bit.
#include <stdio.h>

int main() {
    int bytes;
    int bits;

    // Input bytes from user
    printf("Enter the number of bytes: ");
    scanf("%d", &bytes);

    // Calculate bits from bytes
    bits = bytes * 8;

    // Display the result
    printf("%d bytes is equal to %d bits.\n", bytes, bits);

    return 0;
}
