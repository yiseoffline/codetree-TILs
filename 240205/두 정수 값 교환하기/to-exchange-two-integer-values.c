#include <stdio.h>

void swap(int n, int m){
    int temp =n;
    n=m;
    m=temp;
    printf("%d %d",n,m);
}

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    swap(n,m);
    return 0;
}