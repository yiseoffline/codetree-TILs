#include <stdio.h>
#include <string.h>

int exist369(int n){
    while(n>0){
        if(n%10==3||n%10==6||n%10==9){
            return 1;
        }
        n/=10;
    }
    return 0;
}

int is369(int n){
    return exist369(n)||(n%3==0);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int cnt=0;
    for(int i=a; i<=b; i++){
        if(is369(i)){
            cnt++;
        }
    }    
    printf("%d",cnt);
    return 0;
}