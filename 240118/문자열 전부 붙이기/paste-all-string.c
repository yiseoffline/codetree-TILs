#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d\n", &n);

    char arr[n][100];
    char res[n * 100];
    res[0] = '\0'; // 첫 번째 요소를 널 문자로 초기화

    for (int i = 0; i < n; i++) {
        scanf("%s\n", arr[i]);
        strcat(res, arr[i]);
    }

    printf("%s", res);
    return 0;
}