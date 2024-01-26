#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    printf("%d",(c*60+d)-(a*60+b));
    return 0;
}