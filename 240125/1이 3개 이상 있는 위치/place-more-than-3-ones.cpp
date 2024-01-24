#include <stdio.h>

#define MAX_N 100

int n;
int arr[MAX_N][MAX_N];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int calculate(int x, int y) {
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (InRange(nx, ny) && arr[nx][ny] == 1)
            cnt++;
    }

    return cnt;
}

int main() {
    // 입력
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    // 각 칸을 탐색합니다.
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (calculate(i, j) >= 3)
                ans++;

    printf("%d", ans);
    return 0;
}