#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    int min=arr[0];
    for(int i=1; i<n; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        if(min==arr[i]){
            cnt++;
        }
    }
    printf("%d %d",min, cnt);
    return 0;
}