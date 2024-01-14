#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[5][10]={
        "apple",
        "banana",
        "grape",
        "blueberry",
        "orange"
    };
    char word;
    scanf("%c",&word);
    int cnt=0;

    for(int i=0; i<5; i++){
        if(arr[i][2]==word || arr[i][3]==word){
            printf("%s\n",arr[i]);
            cnt++;
        }
    } 
    printf("%d",cnt);

    return 0;
}