#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char s[10];
    for(int i=0; i<10; i++){
        scanf("%c ",&s[i]);
    }
    for(int i=1; i<10; i+=3){
        printf("%c ",s[i]);
    }
    return 0;
}