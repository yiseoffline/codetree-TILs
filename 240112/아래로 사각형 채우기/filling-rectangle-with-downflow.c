#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int cnt=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[j][i]=cnt;
            cnt++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}