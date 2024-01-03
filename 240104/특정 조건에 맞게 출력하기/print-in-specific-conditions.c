#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int i=0;
    while(i<100){
        scanf("%d ",&arr[i]);
        if(arr[i]==0){
            break;
        }
        if(arr[i]%2==1){
            arr[i]+=3;
            printf("%d ",arr[i]);
        } else{
            arr[i]/=2;
            printf("%d ",arr[i]);
        }
        i++;
    }
    return 0;
}