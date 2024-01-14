#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char arr[n][100];
    int totalLength = 0;
    int countA = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
        totalLength += strlen(arr[i]);

        // 첫 번째 문자가 'a'인 경우 countA 증가
        if (arr[i][0] == 'a') {
            countA++;
        }
    }

    printf("%d %d\n", totalLength, countA);

    return 0;
}