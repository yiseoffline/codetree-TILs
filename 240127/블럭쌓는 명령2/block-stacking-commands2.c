#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    // 배열을 동적으로 할당하고 초기화
    int *space = (int *)malloc((n + 1) * sizeof(int));
    if (space == NULL) {
        printf("메모리 할당 오류\n");
        return 1;
    }

    for (int i = 0; i <= n; i++) {
        space[i] = 0;
    }

    int a[k];
    int b[k];

    for (int i = 0; i < k; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    for (int i = 0; i < k; i++) {
        for (int j = a[i]; j <= b[i]; j++) {
            space[j] += 1;
        }
    }

    int max = space[0];
    for (int i = 1; i <= n; i++) {
        if (max < space[i]) {
            max = space[i];
        }
    }

    free(space); // 동적으로 할당된 메모리를 해제
    printf("%d", max);
    return 0;
}