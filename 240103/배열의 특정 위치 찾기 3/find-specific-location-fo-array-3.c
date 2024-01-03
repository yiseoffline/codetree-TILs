#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int sum=0;
    int i=0;
    for(int i=0; i<100; i++){
        scanf("%d ",&arr[i]);
    }
    while(i<100){
        if(arr[i]==0){
            sum+=arr[i-3]+arr[i-2]+arr[i-1];
            break;
        }
        i++;
    }
    printf("%d",sum);
    
    return 0;
}