#include <stdio.h>

#define MAX_N 10
#define MAX_R 200
#define OFFSET 100

int n;
int x1[MAX_N], y1[MAX_N];
int x2[MAX_N], y2[MAX_N];

int checked[MAX_R + 1][MAX_R + 1];

int main() {
    // 입력
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
        
        // OFFSET을 더해줍니다.
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
    }
    
    // 직사각형을 칠해줍니다.
    // 격자 단위로 진행하는 문제이므로
    // x2, y2에 등호가 들어가지 않음에 유의합니다.
    for(int i = 0; i < n; i++)
        for(int x = x1[i]; x < x2[i]; x++)
            for(int y = y1[i]; y < y2[i]; y++)
                checked[x][y] = 1;
    
    // 직사각형 넓이의 총 합을 구합니다.
    int area = 0;
    for(int x = 0; x <= MAX_R; x++)
        for(int y = 0; y <= MAX_R; y++)
            if(checked[x][y])
                area++;
    
    printf("%d", area);
    return 0;
}