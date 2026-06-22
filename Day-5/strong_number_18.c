#include <stdio.h>

int main() {
    int n, n1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    n1 = n;

    while (n1 > 0) {
        int digit = n1 % 10;
        int fact = 1;

        for (int i = 1; i <= digit; i++) {
          fact =  fact * i;
        }

        sum = sum + fact;
        n1 /= 10;
    }

    if (sum == n)
        printf("%d is a Strong Number\n", n);
    else
        printf("%d is not a Strong Number\n", n);

    return 0;
}