#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d\n",&n);
    char direction[n];
    int distance[n];
    int nx=0;
    int ny =0;
    for(int i=0; i<n; i++){
        scanf("%c %d\n",&direction[i], &distance[i]);
        if(direction[i]=='N'){
            ny+=distance[i];
        } else if(direction[i]=='S'){
            ny-=distance[i];
        } else if(direction[i]=='E'){
            nx+=distance[i];
        } else if(direction[i]=='W'){
            nx-=distance[i];
        }
    }
    printf("%d %d", nx, ny);
    return 0;
}