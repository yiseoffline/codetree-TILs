#include <stdio.h>
#include <stdbool.h>

#define MAX_N 100

int arr[MAX_N][MAX_N];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y, int n){
    return (0<=x && x<n && 0<=y && y<n);
}

int calculate(int x, int y, int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (InRange(nx, ny,n) && arr[nx][ny] == 1)
            cnt++;
    }

    return cnt;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d\n",&n);
    arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    int x=0, y=0;

    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (calculate(i, j, n) >= 3)
                ans++;

    printf("%d", ans);
    return 0;
}