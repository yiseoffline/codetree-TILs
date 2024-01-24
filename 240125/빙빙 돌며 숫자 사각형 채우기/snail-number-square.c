#include <stdio.h>

#define MAX 101

int n, m;
int arr[MAX][MAX];

// 북 동 남 서
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int inRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    scanf("%d %d", &n, &m);
    arr[0][0] = 1;

    int x = 0, y = 0;
    int dict = 2;
    int idx = 2;

    for (; idx <= n * m;) {
        int nextX = x + dx[dict];
        int nextY = y + dy[dict];

        if (inRange(nextX, nextY) == 0 || arr[nextX][nextY] != 0) {
            dict = (dict + 1) % 4;
            continue;
        }

        x = nextX;
        y = nextY;
        arr[x][y] = idx++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}