#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[100];
    scanf("%s",arr);
    int len = strlen(arr);
    int i=len-1;
    while(i>=0){
        printf("%c",arr[i]);
        i-=2;
    }
    return 0;
}