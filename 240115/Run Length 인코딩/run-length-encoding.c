#include <stdio.h>
#include <string.h>

int main() {
    char arr[1000];
    int cnt;
    
    scanf("%s", arr);
    
    int len = strlen(arr);
    char result_str[2 * len]; // 최대 길이의 두 배의 공간 확보
    
    int pos = 0; // 결과 문자열의 현재 위치
    
    for (int i = 0; i < len; i++) {
        char current_char = arr[i];
        cnt = 1;
        
        while (i < len - 1 && arr[i] == arr[i + 1]) {
            cnt++;
            i++;
        }
        
        // 결과를 문자열로 변환하여 result_str에 저장
        pos += snprintf(result_str + pos, sizeof(result_str) - pos, "%c%d", current_char, cnt);
    }
    // 결과 문자열의 길이 출력
    printf("%d\n", pos);
    
    // 결과 문자열 출력
    printf("%s\n", result_str);

    return 0;
}