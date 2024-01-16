#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[20];
    scanf("%s",arr);
    int count_eb=0;
    int count_ee=0;
    int len = strlen(arr); // eeeb = 4
    for(int i=0; i<len; i++){
        if(arr[i]=='e' && arr[i+1]=='b'){
            count_eb++;
        } 
        if(arr[i]=='e' && arr[i+1]=='e'){
            count_ee++;
        }
    }

    printf("%d %d",count_ee,count_eb);

    return 0;
}