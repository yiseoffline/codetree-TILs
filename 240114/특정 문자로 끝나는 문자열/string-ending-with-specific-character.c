#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[10][20];
    char word;

    for(int i=0; i<10; i++){
        scanf("%s\n",arr[i]);
    }
    scanf("%c",&word);
    int cnt=0;
    for(int i=0; i<10; i++){
        //int fin=strlen(arr[i]);
        if(arr[i][-1]==word){
            printf("%s\n",arr[i]);
            cnt++;
        }
    }
    if(cnt==0){
        printf("None");
    }

    return 0;
}