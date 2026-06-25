#include<stdio.h>
int main(){

    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);   // reads a single word

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // convert to uppercase  97-65=32 (a-A)
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
