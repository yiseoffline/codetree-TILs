#include <stdio.h>

#define MAX_N 1000

int n;
int num[MAX_N][MAX_N];
int dp[MAX_N][MAX_N];

void Initialize() {
    dp[0][n - 1] = num[0][n - 1];

    for(int i = 1; i < n; i++)
        dp[i][n - 1] = dp[i - 1][n - 1] + num[i][n - 1];

    for(int j = n - 2; j >= 0; j--)
        dp[0][j] = dp[0][j + 1] + num[0][j];
}

int main() {
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &num[i][j]);

    Initialize();

    for(int i = 1; i < n; i++)
        for(int j = n - 2; j >= 0; j--) 
            dp[i][j] = (dp[i - 1][j] < dp[i][j + 1] ? dp[i - 1][j] : dp[i][j + 1]) + num[i][j];

    printf("%d\n", dp[n - 1][0]);
    return 0;
}