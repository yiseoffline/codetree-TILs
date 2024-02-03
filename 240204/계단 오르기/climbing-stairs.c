#include <stdio.h>

#define MAX_N 1000
#define MOD 10007

int n;
int dp[MAX_N + 1];

int main() {
    scanf("%d", &n);

    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for(int i = 4; i <= n; i++)
        dp[i] = (dp[i - 2] + dp[i - 3]) % MOD;

    printf("%d\n", dp[n]);
    return 0;
}