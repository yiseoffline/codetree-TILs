#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    int cnt=0;
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
        if(arr[i]==m){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}