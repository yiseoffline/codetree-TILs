#include <stdio.h>
#include <stdbool.h>

bool year(int y){
    if(y % 4 == 0){
        if(y % 100 == 0){
            if(y % 400 == 0){
                return true;  // 4의 배수이면서 100의 배수이면서 400의 배수인 경우 윤년
            } else {
                return false;  // 4의 배수이면서 100의 배수이지만 400의 배수가 아닌 경우는 평년
            }
        } else {
            return true;  // 4의 배수이면서 100의 배수가 아닌 경우 윤년
        }
    }
    return false;  // 4의 배수가 아닌 경우는 평년
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