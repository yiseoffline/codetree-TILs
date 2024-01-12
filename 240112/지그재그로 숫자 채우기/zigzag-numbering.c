#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int elem=0;
    int cnt=0;
    for(int i=0; i<m; i++){
        if(cnt%2==0){
            for(int j=0; j<n; j++){
                arr[j][i]=elem;
                elem++;
            }
        } else{
            for(int j=n-1; j>=0; j--){
                arr[j][i]=elem;
                elem++;
            }
        }
        cnt++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}