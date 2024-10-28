// Convert All Input String Simultaneously Into Asterisk ( * )
#include<stdio.h>

int main() {
    char ch;

    printf("Enter a string: ");

    while ((ch = getchar()) != EOF) {
        putchar('*');
    }

    return 0;
}

