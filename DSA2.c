#include <stdio.h>
#include <string.h>

int is_palindrome(const char *str) {
    int len = strlen(str);
    int i;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char str[] = "dalad";

    if (is_palindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}