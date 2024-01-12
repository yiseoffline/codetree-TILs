#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int grid1[n][m];
    int grid2[n][m];
    int newGrid[n][m];

    // 첫 번째 격자 입력 받기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &grid1[i][j]);
        }
    }

    // 두 번째 격자 입력 받기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &grid2[i][j]);
        }
    }

    // 새로운 격자 생성
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            newGrid[i][j] = (grid1[i][j] == grid2[i][j]) ? 0 : 1;
        }
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", newGrid[i][j]);
        }
        printf("\n");
    }

    return 0;
}