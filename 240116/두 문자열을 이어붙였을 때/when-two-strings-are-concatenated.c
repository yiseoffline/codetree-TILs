#include <stdio.h>
#include <string.h>

int main() {
    char A[100];
    char B[100];
    scanf("%s\n%s", A, B);

    char res_a[200];
    char res_b[200];

    strcpy(res_a, A);  // A를 res_a로 복사
    strcat(res_a, B);  // B를 res_a에 이어붙임

    strcpy(res_b, B);  // B를 res_b로 복사
    strcat(res_b, A);  // A를 res_b에 이어붙임

    if (strcmp(res_a, res_b) == 0) {
        printf("true");
    } else {
        printf("false");
    }

    return 0;
}