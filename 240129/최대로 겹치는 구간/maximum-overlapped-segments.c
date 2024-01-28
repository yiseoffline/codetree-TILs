#include <stdio.h>

#define MAX_N 100
#define MAX_R 200
#define OFFSET 100

int n;
int x1[MAX_N], x2[MAX_N];

int checked[MAX_R + 1];

int main() {
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x1[i], &x2[i]);
        x1[i] += OFFSET;
        x2[i] += OFFSET;
    }
    
    for (int i = 0; i < n; i++)
        for (int j = x1[i]; j < x2[i]; j++)
            checked[j]++;
    
    int max = 0;
    for (int i = 0; i <= MAX_R; i++)
        if (checked[i] > max)
            max = checked[i];
    
    printf("%d", max);
    return 0;
}