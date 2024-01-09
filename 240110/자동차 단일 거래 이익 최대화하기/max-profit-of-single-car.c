#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // 자동차 가격을 저장하는 배열
    int prices[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int maxProfit = 0;  // 최대 이익 초기화

    // 최소 가격과 최대 이익 찾기
    int minPrice = prices[0];
    for (int i = 1; i < n; i++) {
        // 현재 가격과 최소 가격을 비교하여 최소 가격 업데이트
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            // 현재 이익 계산하여 최대 이익 업데이트
            int currentProfit = prices[i] - minPrice;
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
        }
    }

    // 최대 이익 출력
    printf("%d\n", maxProfit);

    return 0;
}