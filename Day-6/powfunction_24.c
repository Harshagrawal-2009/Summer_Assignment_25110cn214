#include <stdio.h>

int main() {
    int x, n;
    long long result = 1; 

    printf("Enter base : ");
    scanf("%d", &x);

    printf("Enter exponent : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        result *= x;
    }

    printf("%d^%d = %d\n", x, n, result);

    return 0;
}
