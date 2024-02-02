#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

#define MAX_N 100
#define MAX_M 100

int n, m;

int a[MAX_N][MAX_M];

int queue[MAX_N * MAX_M][2];
bool visited[MAX_N][MAX_M];
int step[MAX_N][MAX_M]; 

int ans = INT_MAX;

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

bool CanGo(int x, int y) {
    return InRange(x, y) && a[x][y] && !visited[x][y];
}

void Push(int nx, int ny, int new_step) {
    queue[new_step][0] = nx;
    queue[new_step][1] = ny;
    visited[nx][ny] = true;
    step[nx][ny] = new_step;
}

void FindMin() {
    int front = 0, rear = 0;

    while (front <= rear) {
        int x = queue[front][0], y = queue[front][1];
        front++;

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir], ny = y + dy[dir];

            if (CanGo(nx, ny))
                Push(nx, ny, step[x][y] + 1);
        }
    }

    if (visited[n - 1][m - 1])
        ans = step[n - 1][m - 1];
}

int main() {
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    Push(0, 0, 0);
    FindMin();

    if (ans == INT_MAX)
        ans = -1;

    printf("%d\n", ans);

    return 0;
}