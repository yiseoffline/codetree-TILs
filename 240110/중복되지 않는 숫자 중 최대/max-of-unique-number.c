#include <stdio.h>

#define MAX_SIZE 1000

int main() {
    int n;

    // 배열 크기 입력
    scanf("%d", &n);

    int arr[MAX_SIZE];
    int frequency[MAX_SIZE] = {0}; // 숫자의 빈도를 저장할 배열 초기화
    int maxUnique = -1;

    // 배열 요소 입력
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        frequency[arr[i]]++;
    }

    // 빈도가 1인 숫자 중에서 최댓값 찾기
    for (int i = 0; i < MAX_SIZE; i++) {
        if (frequency[i] == 1) {
            if(i>maxUnique){
                maxUnique=i;
            }
        }
    }

    // 결과 출력
    printf("%d\n", maxUnique);

    return 0;
}