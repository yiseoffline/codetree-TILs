#include <stdio.h>
#include <stdbool.h>

// 주어진 날짜가 유효한지 확인하는 함수
int isExist(int y, int m, int d) {
    if (m < 1 || m > 12) {
        return false;
    }

    if (d < 1) {
        return false;
    }

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if (d <= 31) {
            return true;
        } else {
            return false;
        }
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d <= 30) {
            return true;
        } else {
            return false;
        }
    } else if (m == 2) {
        if (y % 4 == 0) {
            if (y % 100 != 0 || (y % 100 == 0 && y % 400 == 0)) {
                if (d <= 29) {
                    return true;
                } else {
                    return false;
                }
            }
        } else {
            if (d <= 28) {
                return true;
            } else {
                return false;
            }
        }
    } else {
        return false;
    }
}

// 월을 기반으로 계절을 결정하는 함수
void season(int m) {
    if (m == 3 || m == 4 || m == 5) {
        printf("Spring");
    } else if (m == 6 || m == 7 || m == 8) {
        printf("Summer");
    } else if (m == 9 || m == 10 || m == 11) {
        printf("Fall");
    } else if (m == 1 || m == 2 || m == 12) {
        printf("Winter");
    }
}

int main() {
    int y, m, d;
    
    // 년, 월, 일을 입력받습니다.
    scanf("%d %d %d", &y, &m, &d);
    
    // 날짜가 유효한지 확인하고 해당 월의 계절 또는 -1을 출력합니다.
    if (isExist(y, m, d) == true) {
        season(m);
    } else {
        printf("-1");
    }

    return 0;
}