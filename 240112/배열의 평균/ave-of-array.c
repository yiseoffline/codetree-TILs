#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2][4];
    int width_arr[2];
    int height_arr[4];
    int width, height;

    int sum=0;

    for(int i=0; i<2; i++){
        width=0;
        for(int j=0; j<4; j++){
            scanf("%d ",&arr[i][j]);
            width+=arr[i][j];
            sum+=arr[i][j];
        }
        width_arr[i]=width/4;
        printf("%.1lf ",(double)width_arr[i]);
    }
    printf("\n");
    for(int i=0; i<4; i++){
        height=0;
        for(int j=0; j<2; j++){
            height+=arr[j][i];
        }
        height_arr[i]=height/2;
        printf("%.1lf ",(double)height_arr[i]);
    }
    printf("\n%.1lf",(double)sum/8);

    return 0;
}