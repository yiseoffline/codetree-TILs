#include <stdio.h>

int sum(int n){
    int res=0;
    for(int i=1; i<=n; i++){
        res+=i;
    }
    return res/10;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}