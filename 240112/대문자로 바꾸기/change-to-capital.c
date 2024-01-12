#include <stdio.h>
#include <ctype.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[5][3];
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            scanf("%c ",&arr[i][j]);
            arr[i][j]=toupper(arr[i][j]);
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}