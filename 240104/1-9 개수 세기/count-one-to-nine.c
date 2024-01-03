#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int arr[n];
    int count_arr[10]={0};
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0; i<n; i++){
        count_arr[arr[i]]++;
    }
    for(int i=1; i<10; i++){
        printf("%d\n",count_arr[i]);
    }
    return 0;
}