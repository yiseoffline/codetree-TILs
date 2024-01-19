#include <stdio.h>

void calculate(int n){
    int ten,one=0;
    int res=0;
    if(n<100 && n>=10){
        ten=n/10;
        one = n-ten*10;
        res=ten+one;
    }

    if(n%2==0 && res%5==0){
        printf("Yes");
    } else {
        printf("No");
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    calculate(n);
    return 0;
}