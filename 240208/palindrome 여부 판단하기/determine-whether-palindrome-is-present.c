#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *s) {
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++) {
        if (s[i] != s[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}