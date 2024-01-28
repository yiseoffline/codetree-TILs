#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0;
    for (int i=2; i*i<=num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int sum_of_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt = 0;
    for (int i=a; i<=b; i++) {
        if (is_prime(i) && sum_of_digits(i) % 2 == 0) {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}