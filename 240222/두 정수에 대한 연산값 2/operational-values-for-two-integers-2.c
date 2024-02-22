#include <stdio.h>

void calculate(int* a, int* b){
    if(*a>*b){
        *a*=2;
        *b+=10;
    }
    else if(*a<*b){
        *a+=10;
        *b*=2;
    }
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    calculate(&a,&b);
    printf("%d %d",a,b);
    return 0;
}