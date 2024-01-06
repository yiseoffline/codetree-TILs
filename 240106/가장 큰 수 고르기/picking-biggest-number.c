#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    for(int i=0; i<10; i++){
        scanf("%d ",&arr[i]);
    }
    int max=0;
    for(int i=0; i<10; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}