#include <stdio.h>

int main() {
    int arr[10];

    // 10개의 정수 입력받기
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // 500 미만의 수 중 가장 큰 수와 500 초과의 수 중 가장 작은 수 찾기
    int under_max = -1;   // 500 미만의 수 중 가장 큰 수 초기화
    int over_min = 1000; // 500 초과의 수 중 가장 작은 수 초기화

    for (int i = 0; i < 10; i++) {
        if (arr[i] < 500 && arr[i] > under_max) {
            under_max = arr[i];
        } else if (arr[i] > 500 && arr[i] < over_min) {
            over_min = arr[i];
        }
    }

    // 결과 출력
    printf("%d %d",under_max, over_min);
    return 0;
}