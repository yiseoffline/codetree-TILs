#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    int i=0;
    while(i<n){
        if(arr[i]%2==1){
            i++;
            continue;
        }
        printf("%d ",arr[i]);
        i++;
    }
    return 0;
}