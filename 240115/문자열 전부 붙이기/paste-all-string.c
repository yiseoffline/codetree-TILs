#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d\n",&n);
    char arr[n][100];
    char res[n*100];
    for(int i=0; i<n; i++){
        scanf("%s\n",arr[i]);
        strcat(res,arr[i]);
    }
    printf("%s",res);
    return 0;
}