#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[10][20];
    int res=0;

    for(int i=0; i<10; i++){
        scanf("%s",&arr[i]);
        res+=strlen(arr[i]);
    }
    printf("%d",res);
    return 0;
}