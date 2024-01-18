#include <stdio.h>

void print(int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("1");
        }
        printf("\n");
    }
}

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    print(n,m);
    return 0;
}