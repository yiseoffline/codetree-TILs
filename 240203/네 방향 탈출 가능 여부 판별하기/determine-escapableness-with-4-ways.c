#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_N 100
#define MAX_M 100

int n, m;
int a[MAX_N][MAX_M];
int visited[MAX_N][MAX_M];
int queue[MAX_N * MAX_M][2];

void initialize() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            visited[i][j] = 0;
        }
    }
}

bool in_range(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

bool can_go(int x, int y) {
    return in_range(x, y) && a[x][y] && !visited[x][y];
}

void bfs() {
    int front = 0, rear = 0;

    while (front <= rear) {
        int x = queue[front][0], y = queue[front][1];
        front++;

        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};

        for (int dir = 0; dir < 4; dir++) {
            int new_x = x + dx[dir], new_y = y + dy[dir];

            if (can_go(new_x, new_y)) {
                queue[++rear][0] = new_x;
                queue[rear][1] = new_y;
                visited[new_x][new_y] = 1;
            }
        }
    }
}

int main() {
    // 입력:
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    initialize();

    // bfs를 이용해 최소 이동 횟수를 구합니다.
    // 시작점을 queue에 넣고 시작합니다.
    queue[0][0] = 0;
    queue[0][1] = 0;
    visited[0][0] = 1;

    bfs();

    // 출력:
    int answer = visited[n - 1][m - 1] ? 1 : 0;
    printf("%d\n", answer);

    return 0;
}