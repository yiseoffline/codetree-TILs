#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    int r,c;
    int elem=1;
    scanf("%d %d\n",&n,&m);
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j]=0;
        }
    }

    for(int i=0; i<m; i++){
        scanf("%d %d",&r,&c);
        arr[r-1][c-1]=elem;
        elem++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}