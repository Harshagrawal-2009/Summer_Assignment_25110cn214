#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        if (n & 1) {   // Check if the least significant bit is 1
            count++;
        }
        n = n >> 1;    // Right shift to check the next bit
    }

    printf("Number of set bits: %d\n", count);

    return 0;
}
