#include <stdio.h>

int cal(int a, int b, char op){
    if(op=='+'){
        return a+b;
    }
    else if(op=='-'){
        return a-b;
    }
    else if(op=='*'){
        return a*b;
    }
    else if(op=='/'){
        return a/b;
    }
    else{
        return -1;
    }
}

int main() {
    int a,b;
    char op;
    scanf("%d %c %d",&a,&op,&b);
    if(cal(a,b,op)==-1){
        printf("False");
    }
    printf("%d %c %d = %d",a,op,b,cal(a,b,op));
    return 0;
}