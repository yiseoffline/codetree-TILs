#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_N 100
#define MAX_M 100

int n, m;
int a[MAX_N][MAX_M];

// bfs에 필요한 변수들입니다.
int queue[MAX_N * MAX_M][2];
bool visited[MAX_N][MAX_M];

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

bool CanGo(int x, int y) {
    return InRange(x, y) && a[x][y] && !visited[x][y];
}

void BFS() {
    int front = 0, rear = 0;
    
    while (front <= rear) {
        int x = queue[front][0], y = queue[front][1];
        front++;

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir], ny = y + dy[dir];

            if (CanGo(nx, ny)) {
                queue[++rear][0] = nx;
                queue[rear][1] = ny;
                visited[nx][ny] = true;
            }
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    queue[0][0] = 0;
    queue[0][1] = 0;
    visited[0][0] = true;

    BFS();

    printf("%d\n", visited[n - 1][m - 1]);

    return 0;
}