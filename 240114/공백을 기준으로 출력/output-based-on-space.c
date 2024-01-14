#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char result[200]; // 결과를 저장할 문자열
    int j = 0;

    // 첫 번째 문자열 입력
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0'; // 개행 문자를 널 문자로 대체

    // 두 번째 문자열 입력
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2)] = '\0'; // 개행 문자를 널 문자로 대체

    // 첫 번째 문자열에서 공백 제외한 문자열을 result에 추가
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] != ' ') {
            result[j++] = str1[i];
        }
    }

    // 두 번째 문자열에서 공백 제외한 문자열을 result에 추가
    for (int i = 0; i < strlen(str2); i++) {
        if (str2[i] != ' ') {
            result[j++] = str2[i];
        }
    }

    // 결과 출력
    printf("%s", result);

    return 0;
}