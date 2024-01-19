#include <stdio.h>

int gcd(int n, int m){
    int gcd=0;
    for(int i=1; i<=n && i<=m; i++){
        if(n%i==0 && m%i==0){
            gcd=i;
        }
    }
    return gcd;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",gcd(n,m));
    return 0;
}