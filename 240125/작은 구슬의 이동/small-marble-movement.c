#include <stdio.h>

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    
    int r, c;
    char d;
    scanf("%d %d %c", &r, &c, &d);

    // 방향에 따른 좌표 이동
    int dr[] = {-1, 1, 0, 0};  // 상, 하, 좌, 우
    int dc[] = {0, 0, -1, 1};

    // 방향을 숫자로 매핑 (0: 상, 1: 하, 2: 좌, 3: 우)
    int direction;
    switch (d) {
        case 'U':
            direction = 0;
            break;
        case 'D':
            direction = 1;
            break;
        case 'L':
            direction = 2;
            break;
        case 'R':
            direction = 3;
            break;
    }

    // t초 동안 시뮬레이션 수행
    for (int i = 0; i < t; i++) {
        // 현재 위치에서 이동할 다음 위치 계산
        int nr = r + dr[direction];
        int nc = c + dc[direction];

        // 벽에 부딪혔을 경우 방향을 바꿔줌
        if (nr < 1 || nr > n || nc < 1 || nc > n) {
            direction = (direction + 1) % 4;
            continue;  // 다음 초로 넘어감
        }

        // 다음 위치로 이동
        r = nr;
        c = nc;
    }

    // 최종 위치 출력
    printf("%d %d\n", r, c);

    return 0;
}