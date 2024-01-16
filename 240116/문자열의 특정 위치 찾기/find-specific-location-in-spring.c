#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[2];
    char word;
    int i=0; 
    bool exists=false;
    scanf("%s %c",arr,&word);
    while(i<strlen(arr)){
        if(arr[i]==word){
            printf("%d",i);
            exists=true;
            break;
        }
        i++;
    }
    if(exists==false){
        printf("No");
    }
    return 0;
}