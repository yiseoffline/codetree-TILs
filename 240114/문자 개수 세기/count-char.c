#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[100];
    char word;
    int cnt=0;
    fgets(str,100,stdin);
    scanf("%c",&word);
    for(int i=0; i<strlen(str); i++){
        if(str[i]==word){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}