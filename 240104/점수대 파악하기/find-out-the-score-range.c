#include <stdio.h>

int main() {
    int score[100];
    int i = 0;
    int grade[100];
    int count[11] = {0};  // 0~10까지 11개의 점수대

    while (i < 100) {
        scanf("%d", &score[i]);
        if (score[i] == 0) {
            break;
        }
        grade[i] = score[i] / 10;
        i++;
    }

    for (int k = 0; k < i; k++) {
        count[grade[k]]++;
    }

    for (int j = 10; j > 0; j--) {
            printf("%d - %d\n", j * 10, count[j]);
    }

    return 0;
}