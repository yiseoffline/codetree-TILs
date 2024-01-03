#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int i=0;
    int k=1;
    int arr[10];
    int cnt=0;
    while(1){
        arr[i]=k*n;
        if(arr[i]%5==0){
            cnt++;
        }
        if(cnt==2){
            break;
        }
        i++;
        k++;
    }
    for(int j=0; j<i; j++){
        printf("%d ",arr[j]);
    }
    return 0;
}