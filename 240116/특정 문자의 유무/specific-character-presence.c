#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char arr[20];
    scanf("%s", arr);
    bool ee_exists = false;
    bool ab_exists = false;

    for (int i = 0; i < strlen(arr) - 1; i++) {
        if (arr[i] == 'e' && arr[i + 1] == 'e') {
            ee_exists = true;
        }
        if (arr[i] == 'a' && arr[i + 1] == 'b') {
            ab_exists = true;
        }
    }

    if (ee_exists && ab_exists) {
        printf("Yes Yes");
    } else if (ee_exists && !ab_exists) {
        printf("Yes No");
    } else if (!ee_exists && ab_exists) {
        printf("No Yes");
    } else {
        printf("No No");
    }

    return 0;
}