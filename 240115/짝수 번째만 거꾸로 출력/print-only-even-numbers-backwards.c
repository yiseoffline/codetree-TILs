#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[100];
    scanf("%s",arr);
    int cnt=0;
    int len = strlen(arr);
    char res[100];
    for(int i=1; i<len; i+=2){
        res[cnt]=arr[i];
        cnt++;
    }
    for(int i=cnt-1; i>=0; i--){
        printf("%c",res[i]);
    }
}