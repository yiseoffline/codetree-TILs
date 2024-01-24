#include <stdio.h>

#define ASCII_NUM 128
#define DIR_NUM 4

int n, t;
int x, y, dir;
int mapper[128];

int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};

int InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

void Simulate() {
    while (t--) {
        int nx = x + dx[dir], ny = y + dy[dir];
        // 범위 안에 들어온다면 그대로 진행합니다.
        if (InRange(nx, ny)) {
            x = nx, y = ny;
        }
        // 벽에 부딪힌다면, 방향을 바꿔줍니다.
        else
            dir = 3 - dir;
    }
}

int main() {
    // 입력
    scanf("%d %d", &n, &t);

    // 각 알파벳 별 방향 번호를 설정합니다.
    mapper['R'] = 0;
    mapper['D'] = 1;
    mapper['U'] = 2;
    mapper['L'] = 3;

    char c_dir;
    scanf("%d %d %c", &x, &y, &c_dir);
    x--; y--; dir = mapper[c_dir];

    Simulate();

    printf("%d %d", x + 1, y + 1);
    return 0;
}