#include <stdio.h>

// 온전수 판별 함수
int is_ontjeon(int n) {
    // 조건 1: 2로 나누어 떨어지는 경우
    if (n % 2 == 0) return 0;

    // 조건 2: 일의 자리가 5인 경우
    if (n % 10 == 5) return 0;

    // 조건 3: 3으로 나누어 떨어지면서 9로는 나누어 떨어지지 않는 수
    if (n % 3 == 0 && n % 9 != 0) return 0;

    return 1; // 모든 조건을 만족하지 않으면 온전수
}

int main() {
    int a, b, count = 0;

    // 정수 a와 b 입력 받기
    scanf("%d %d", &a, &b);

    // a이상 b이하의 수 중에서 온전수 찾기
    for (int i = a; i <= b; i++) {
        if (is_ontjeon(i)) {
            count++;
        }
    }

    // 온전수의 개수 출력
    printf("%d\n", count);

    return 0;
}