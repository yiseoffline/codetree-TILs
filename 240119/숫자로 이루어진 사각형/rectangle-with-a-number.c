#include <stdio.h>

void square(int n){
    int elem=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(elem==10){
                elem=1;
            }
            printf("%d ",elem);
            elem++;

        }
        printf("\n");
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    square(n);
    return 0;
}