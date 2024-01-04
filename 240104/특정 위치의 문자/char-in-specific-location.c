#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char s[6]={'L','E','B','R','O','S'};
    int idx=-1;
    char hunted;
    scanf("%c",&hunted);
    for(int i=0; i<6; i++){
        if(s[i]==hunted){
            idx=i;
        }
    }
    printf("%d",idx);
    return 0;
}