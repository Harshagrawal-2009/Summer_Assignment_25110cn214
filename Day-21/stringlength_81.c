#include <stdio.h>

int main(){
    int count = 0, i=0;
    char name[30];

    printf("Enter a string name :");
    gets(name);

    for(i=0; name[i] != '\0'; i++){
        count++;
    }

    printf("Length of the string is: %d", count);
    return 0;
}