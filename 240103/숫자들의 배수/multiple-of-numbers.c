#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // 입력받은 정수의 배수들을 저장할 배열
    int multiples[10];
    int count = 0;

    // n의 배수들을 계산하여 배열에 저장
    for (int i = 1; i <= 10; i++) {
        multiples[i - 1] = n * i;
    }

    // 배열의 값을 출력하면서 5의 배수가 2번 나오면 종료
    for (int i = 0; i < 10; i++) {
        printf("%d ", multiples[i]);
        if (multiples[i] % 5 == 0) {
            count++;
            if (count == 2) {
                break;
            }
        }
    }

    return 0;
}