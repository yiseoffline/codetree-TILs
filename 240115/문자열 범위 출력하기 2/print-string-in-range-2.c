#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[100];
    int n;
    scanf("%s\n",arr);
    scanf("%d",&n);
    int len = strlen(arr);
    for(int i=len-1; i>=len-n; i--){
        printf("%c",arr[i]);
    }

    return 0;
}