#include <stdio.h>

#define N 3
#define MAX_R 2000
#define OFFSET 1000

int x1[N], y1[N];
int x2[N], y2[N];

int checked[MAX_R + 1][MAX_R + 1];

int main() {
    for (int i = 0; i < N; i++) {
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
    }
    
    for (int i = 0; i < N; i++)
        for (int x = x1[i]; x < x2[i]; x++)
            for (int y = y1[i]; y < y2[i]; y++)
                checked[x][y] = i + 1;
    
    int area = 0;
    for (int x = 0; x <= MAX_R; x++)
        for (int y = 0; y <= MAX_R; y++)
            if (checked[x][y] == 1 || checked[x][y] == 2)
                area++;
    
    printf("%d", area);
    return 0;
}