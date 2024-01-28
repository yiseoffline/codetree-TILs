#include <stdio.h>
#include <math.h>

int power(int a, int b){
    return pow(a,b);
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",power(a,b));
    return 0;
}