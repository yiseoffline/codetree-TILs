#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n;
    scanf("%d\n",&n);
    
    int x1[n];
    int x2[n];
    int y1[n];
    int y2[n];

    bool isNegative=false;

    for(int i=0; i<n; i++){
        scanf("%d %d %d %d\n",&x1[i],&y1[i],&x2[i],&y2[i]);
        if(x1[i]<0 || x2[i]<0 || y1[i]<0 || y2[i]<0){
            isNegative=true;
        }
    }

    for(int i=0; i<n; i++){
        if(isNegative==true){
            x1[i]+=100;
            x2[i]+=100;
            y1[i]+=100;
            y2[i]+=100;
        }
    }

    int space[100][100];

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            space[i][j] = 0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=x1[i]; j<x2[i]; j++){
            for(int k=y1[i]; k<y2[i]; k++){
                space[j][k]=1;
            }
        }
    }
    
    int cnt=0;
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(space[i][j]==1){
                cnt++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}