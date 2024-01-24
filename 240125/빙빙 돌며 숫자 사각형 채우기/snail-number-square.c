#include <stdio.h>

#define MAX 100

int n, m, x, y;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
char arr[MAX][MAX] = {0};

int InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main() {
    scanf("%d %d", &n, &m);

    arr[x][y] = 'A';
    char alphabet = 'B';
    int dir = 0;
    for (int i = 1; i < n * m; i++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (!InRange(nx, ny) || arr[nx][ny] != 0) {
            dir = (dir + 1) % 4;
        }

        x += dx[dir];
        y += dy[dir];
        arr[x][y] = alphabet++;

        if (alphabet > 'Z') {
            alphabet = 'A';
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}