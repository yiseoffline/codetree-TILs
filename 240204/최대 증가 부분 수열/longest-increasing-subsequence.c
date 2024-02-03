#include <stdio.h>

#define MAX_N 1000

int main() {
    int n;
    scanf("%d", &n);

    int a[MAX_N + 1];
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    int dp[MAX_N + 1] = {0};

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                if (dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                }
            }
        }
    }

    int result = 0;
    for (int i = 1; i <= n; i++) {
        if (dp[i] > result) {
            result = dp[i];
        }
    }

    printf("%d\n", result);
    return 0;
}