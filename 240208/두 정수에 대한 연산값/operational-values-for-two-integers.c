#include <stdio.h>

void calculate(int *a, int *b){
    if(*a>*b){
        *a+=25;
        *b*=2;
    }
    else if(*a<*b){
        *b+=25;
        *a*=2;
    }
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    calculate(&a,&b);
    printf("%d %d",a,b);
    return 0;
}