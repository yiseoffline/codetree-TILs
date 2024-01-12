#include <stdio.h>

int main() {
    int n;

    // 사용자로부터 숫자의 개수 입력
    scanf("%d", &n);

    // 최대값으로 초기화된 변수
    int minDifference = __INT_MAX__;
    int prevNumber, currentNumber;

    // 사용자로부터 숫자 입력
    scanf("%d ", &prevNumber);

    // 배열을 오름차순으로 정렬하면서 최소 차이 계산
    for (int i = 1; i < n; ++i) {
        scanf("%d ", &currentNumber);

        int difference = currentNumber - prevNumber;
        if (difference < minDifference) {
            minDifference = difference;
        }
        prevNumber = currentNumber;
    }

    // 최소 차이 출력
    printf("%d\n", minDifference);

    return 0;
}