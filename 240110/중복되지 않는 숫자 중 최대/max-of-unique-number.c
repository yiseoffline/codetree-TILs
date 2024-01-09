#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d\n",&n);

    int arr[n];
    int count[1000];
    int idx;
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0; i<n; i++){
        idx=arr[i];
        count[idx]++;
    }
    int max=-1;
    for(int i=0; i<n;i++){
        if(count[i]==1){
            if(max<i){
                max=i;
            }
        } 
    }
    printf("%d",max);
    return 0;
}