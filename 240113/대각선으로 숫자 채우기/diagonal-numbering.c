#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    scanf("%d %d\n",&n,&m);
    int arr[n][m];
    int elem=1;
    
    for(int k=0; k<m;k++){
        for(int i=0; i<=k; i++){
            arr[i][k-i]=elem;
            elem++;
        }                                                  
    }
    int elem2=elem;
    int col=m;
    for(int k=0; k<n-1; k++){
        for(int i=k+1; i<n; i++){
            arr[i][col-i]=elem2;
            elem2++;
        }
        col++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}