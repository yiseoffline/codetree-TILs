#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d\n",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("%d %d",arr[0],arr[1]);
    return 0;
}