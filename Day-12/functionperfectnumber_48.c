#include <stdio.h>

void perfectNumber(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n)
        printf("%d is a Perfect Number\n", n);
    else
        printf("%d is not a Perfect Number\n", n);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    perfectNumber(n);

    return 0;
}
