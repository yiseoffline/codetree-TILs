#include <stdio.h>

#define MAX 10

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[MAX][MAX] = {0};

    // 밑, 오, 위, 왼
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};

    int d = 0;
    int x = 0;
    int y = 0;

    for (int i = 1; i <= n * m; i++) {
        arr[y][x] = i;

        int nextX = x + dx[d];
        int nextY = y + dy[d];

        if (nextX < 0 || nextX >= m || nextY < 0 || nextY >= n || arr[nextY][nextX] != 0) {
            d = (d + 1) % 4;
        }

        x += dx[d];
        y += dy[d];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}