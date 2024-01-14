#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d\n",&n);
    char arr[n][20];
    double len=0;
    for(int i=0; i<n; i++){
        scanf("%s\n",arr[i]);
        len+=strlen(arr[i]);
    }

    char c;
    scanf("%c",&c);
    int cnt=0;

    for(int i=0; i<n; i++){
        if(arr[i][0]==c){
            cnt++;
        }
    }
    printf("%d %.2lf",cnt,round(len/(double)n));

    return 0;
}