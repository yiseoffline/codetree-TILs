#include <stdio.h>

int exist3(int a, int b){
    int cnt=0;
    for(int i=a; i<=b; i++){
        if(i/10==3 || i%10==3){
            cnt++;
        }
    }
    return cnt;
}

int multiple3(int a, int b){
    int cnt=0;
    for(int i=a; i<=b; i++){
        if(i%3==0){
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int a, b;
    scanf("%d %d",&a, &b);
    printf("%d",multiple3(a,b)+exist3(a,b));
    return 0;
}