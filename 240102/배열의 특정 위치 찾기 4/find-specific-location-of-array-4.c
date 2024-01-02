#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    for(int i=0; i<10; i++){
        scanf("%d ",&arr[i]);
    }
    int i=0;
    int num=0;
    int sum=0;
    while(i<10){
        if(arr[i]==0)
            break;
        if(arr[i]%2==0){
            num++;
            sum+=arr[i];
        }
        i++;
    }
    printf("%d %d",num,sum);
    return 0;
}