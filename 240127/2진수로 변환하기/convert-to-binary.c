#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int digits[n];
    int cnt=0;
    int res=0;
    while(1){
        if(n<2){
            digits[cnt++]=n;
            break;
        }
        digits[cnt++]=n%2;
        n/=2;
    }
    for(int i=cnt-1; i>=0; i--){
        printf("%d",digits[i]);
    }

    return 0;
}