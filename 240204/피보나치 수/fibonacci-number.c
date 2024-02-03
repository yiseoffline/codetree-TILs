#include <stdio.h>

#define MAX_NUM 45

int main() {
    int n;
    int dp[MAX_NUM + 1];
    scanf("%d", &n);

    dp[1] = 1;
    dp[2] = 1;

    for(int i = 3; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    printf("%d\n", dp[n]);

    return 0;
}