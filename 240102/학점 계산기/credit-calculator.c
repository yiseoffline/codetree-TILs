#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    float sum=0;
    scanf("%d\n",&n);
    float score[n];
    for(int i=0; i<n; i++){
        scanf("%f ",&score[i]);
    }
    for(int i=0; i<n; i++){
        sum+=score[i];
    }
    float ave = sum/(float)n;
    printf("%.1f\n",ave);
    if(ave>=4.0){
        printf("Perfect");
    } else if(ave >= 3.0){
        printf("Good");
    } else if(ave < 3.0){
        printf("Poor");
    }
    return 0;
}