#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[20];
    char word;
    int i=0; 

    scanf("%s %c",arr,&word);
    while(i<strlen(arr)-1){
        if(arr[i]==word){
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}