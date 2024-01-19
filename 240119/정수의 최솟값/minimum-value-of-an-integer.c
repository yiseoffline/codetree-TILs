#include <stdio.h>

int min(int a, int b, int c){
    int min=0;
    if(a<=b && a<=c){
        min=a;
    } else if(b<=a && b<=c){
        min=b;
    } else if(c<=a && c<=b){
        min = c;
    }
    return min;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",min(a,b,c));
    return 0;
}