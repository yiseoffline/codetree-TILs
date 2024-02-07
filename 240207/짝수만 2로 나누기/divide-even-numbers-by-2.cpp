#include <iostream>

int isEven(int a){
    if(a%2==0){
        return a/2;
    } else{
        return a;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
        printf("%d ",isEven(arr[i]));
    }
    return 0;
}