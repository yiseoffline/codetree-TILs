#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int i=0;
    while(i<10){
        scanf("%d ",&arr[i]);
        if(arr[i]==0){
            break;
        }
        i++;
    }
    for(int j=i-1; j>=0; j--){
        printf("%d ",arr[j]);
    }
    return 0;
}