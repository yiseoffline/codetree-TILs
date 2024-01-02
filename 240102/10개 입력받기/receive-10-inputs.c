#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    for(int i=0; i<10; i++){
        scanf("%d ",&arr[i]);
    }
    int cnt=0;
    int sum=0;
    while(cnt<10){
        if(arr[cnt]==0){
            break;
        }
        sum+=arr[cnt];
        cnt++;
    }
    double ave = (double)sum/(double)cnt;
    printf("%d %.1lf",sum,ave);
    return 0;
}