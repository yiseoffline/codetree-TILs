#include <stdio.h>

int main() {
    int arr[4][4];
    int sum_arr[4];
    int sum=0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d ",&arr[i][j]);
            sum+=arr[i][j];
        }
        sum_arr[i]=sum;
        sum=0;
    }

    for(int i=0; i<4; i++){
        printf("%d\n",sum_arr[i]);
    }
    return 0;
}