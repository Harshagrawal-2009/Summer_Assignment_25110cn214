#include <stdio.h>

int main() {
    int start, end, num, temp, rem, sum, count, i, power;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    for(num = start; num <= end; num++) {
        temp = num;
        sum = 0;
        count = 0;

        while(temp != 0) {
            count++;
            temp = temp / 10;
        }

        temp = num;

        while(temp != 0) {
            rem = temp % 10;
            power = 1;

            for(i = 1; i <= count; i++) {
                power = power * rem;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        if(sum == num) {
            printf("%d \t", num);
        }
    }

    return 0;
}