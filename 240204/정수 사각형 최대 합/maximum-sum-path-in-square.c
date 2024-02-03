#include <stdio.h>

#define MAX_NUM 1000

int n;
int num[MAX_NUM][MAX_NUM];
int dp[MAX_NUM][MAX_NUM];

void Initialize() {
    dp[0][0] = num[0][0];

    for(int i = 1; i < n; i++)
        dp[i][0] = dp[i-1][0] + num[i][0];

    for(int j = 1; j < n; j++)
        dp[0][j] = dp[0][j-1] + num[0][j];
}

int main() {
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &num[i][j]);

    Initialize();

    for(int i = 1; i < n; i++)
        for(int j = 1; j < n; j++) 
            dp[i][j] = (dp[i-1][j] > dp[i][j-1] ? dp[i-1][j] : dp[i][j-1]) + num[i][j];

    printf("%d\n", dp[n-1][n-1]);

    return 0;
}