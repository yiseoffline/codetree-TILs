#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    scanf("%d %d",&n, &m);
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cnt++;
            printf("%d ",cnt);
        }
        printf("\n");
    }
    return 0;
}