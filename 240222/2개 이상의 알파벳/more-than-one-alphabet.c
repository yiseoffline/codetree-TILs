#include <stdio.h>
#include <string.h>

void calculateStr(char* str) { // str의 자료형 명시
    int alphabet[26] = {0}; // 배열 초기화

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') { // 알파벳 소문자인 경우에만 처리
            int ascii = str[i] - 'a';
            alphabet[ascii]++;
        }
    }

    int count = 0;
    for(int i = 0; i < 26; i++) {
        if(alphabet[i] == 1) {
            count++;
        }
    }

    if(count >= 2) {
        printf("Yes");
    } else {
        printf("No");
    }
}

int main() {
    char str[100];
    scanf("%s", str);
    calculateStr(str);
    return 0;
}