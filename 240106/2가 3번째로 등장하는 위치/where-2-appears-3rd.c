#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d\n",&n);
    int arr[n];
    int cnt=0;
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]==2){
            cnt++;
        }
        if(cnt==3){
            printf("%d",i+1);
            break;
        }
    }
    
    return 0;
}