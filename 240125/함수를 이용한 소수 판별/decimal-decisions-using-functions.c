#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int prime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    int res = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        if(prime(i)){
            res += i;
        }
    }
    printf("%d", res);
    return 0;
}