#include <stdio.h>
#include <stdbool.h>

bool year(int y){
    if(y%4==0){
        return true;
    }
    if(y%4==0 && y%100==0){
        return false;
        if(y%400==0){
            return true;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    scanf("%d",&y);
    if(year(y)){
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}