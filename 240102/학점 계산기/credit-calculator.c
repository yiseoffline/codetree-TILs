#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    double sum=0;
    scanf("%d\n",&n);
    double score[n];
    for(int i=0; i<n; i++){
        scanf("%lf ",&score[i]);
    }
    for(int i=0; i<n; i++){
        sum+=score[i];
    }
    double ave = sum/(double)n;
    printf("%.1lf\n",ave);
    if(ave>=4.0){
        printf("Perfect");
    } else if(ave >= 3.0){
        printf("Good");
    } else if(ave < 3.0){
        printf("Poor");
    }
    return 0;
}