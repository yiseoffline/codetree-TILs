#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double score[8];
    double sum = 0;
    for(int i=0; i<8; i++){
        scanf("%lf ",&score[i]);
        sum+=score[i];
    }
    double ave = sum/8;
    printf("%.1lf",ave);
    return 0;
}