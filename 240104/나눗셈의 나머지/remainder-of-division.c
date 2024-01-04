#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int count = 0;
    int arr[b];
    for (int i = 0; i < b; i++) {
        arr[i] = 0;
    }

    while (a > 1) {
        arr[a % b]++;
        a = a / b;
    }

    for (int i = 0; i < b; i++) {
        count += arr[i] * arr[i];
    }

    printf("%d", count);

    return 0;
}

/*
#include <stdio.h>

int main() {
    int a, b;
    int quotient[100];
    int remainder[100];
    int i = 0;
    
    scanf("%d %d", &a, &b);
    
    while (1) {
        quotient[i] = a / b;
        remainder[i] = a % b;
        a = quotient[i];  // 수정: a를 quotient[i]로 갱신
        if (quotient[i] == 0) {
            break;
        }
        i++;
    }
    
    int count[100] = {0};  // 수정: 나머지의 빈도를 저장할 배열 초기화
    
    for (int k = 0; k < i; k++) {
        count[remainder[k + 1]]++;
    }
    
    int sum = 0;
    
    for (int k = 0; k < i + 1; k++) {
        sum += count[k] * count[k];  // 수정: 나머지 빈도의 제곱을 누적
    }
    
    printf("%d", sum);
    
    return 0;
}
*/