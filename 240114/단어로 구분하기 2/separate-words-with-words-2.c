#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[10][200];
    for(int i=0; i<10; i++){
        scanf("%s",arr[i]);
    }
    for(int i=0; i<10; i+=2){
        printf("%s\n",arr[i]);
    }
    return 0;
}