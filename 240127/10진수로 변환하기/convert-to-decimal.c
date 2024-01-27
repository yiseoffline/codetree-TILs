#include <stdio.h>
#include <string.h>

int main() {
    int n, i = 0;
    int arr[8] = {0,};
    char s[9];

    scanf("%d", &n);
    sprintf(s,"%d",n);
    int len=strlen(s);

    // 각 자릿수를 배열에 저장
    while (n != 0) {
        arr[len-1-i] = n % 10;
        n = n / 10;
        i++;
    }
    int res=0;
    // 배열의 내용 출력
    for (i = 0; i < len; i++) {
        res=res*2+arr[i];
    }
    printf("%d",res);
    return 0;
}