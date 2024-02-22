#include <stdio.h>
#include <string.h>

int common_subsequence_index(char* str, char* input_str){
    int index=-1;
    int count=0;
    for (int i = 0; i <= strlen(str) - strlen(input_str); i++) {
        int j;
        // str에서 input_str의 길이만큼 부분 문자열과 일치하는지 확인
        for (j = 0; j < strlen(input_str); j++) {
            if (str[i + j] != input_str[j])
                break;
        }
        // input_str의 모든 문자가 일치하면 시작 인덱스 반환
        if (j == strlen(input_str)) {
            index = i;
            break;
        }
    }
    return index;
}

int main() {
    char str[1000];
    char input_str[1000];
    scanf("%s",str);
    scanf("%s",input_str);
    printf("%d",common_subsequence_index(str,input_str)); 
    return 0;
}