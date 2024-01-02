#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d\n",&n);
    int num[n];
    int even[n];
    int cnt=0;
    int j=0;
    for(int i=0; i<n; i++){
        scanf("%d ",&num[i]);
        if(num[i]%2==0){
            cnt++;
            even[j]=num[i];
            j++;
        }
    }
    for(int i=j-1; i>=0; i--){
        printf("%d ",even[i]);
    }
    return 0;
}