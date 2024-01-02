#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    float ave[n];
    int total = 0;
    int arr[4];
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            scanf("%d ",&arr[j]);
            total+=arr[j];
        }
        ave[i] = (float)total/4;
        total = 0;
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        if(ave[i]>=60){
            printf("pass");
            cnt++;
        } else {
            printf("fail");
        }
        printf("\n");
    }
    printf("%d",cnt);
    return 0;
}