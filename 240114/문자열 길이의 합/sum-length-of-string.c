#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d\n",&n);
    char arr[n][100];
    int res=0;

    for(int i=0; i<n; i++){
        scanf("%s\n",&arr[i]);
        res+=strlen(arr[i]);
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<strlen(arr[i]); j++){
            if(arr[i][j]=='a'){
                cnt++;
            }
        }
    }

    printf("%d %d",res,cnt);

    return 0;
}