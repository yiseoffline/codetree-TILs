#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int odd_sum=0;
    int even_sum=0;
    for(int i=0; i<10; i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0; i<10; i+=2){
        odd_sum+=arr[i];
    }
    for(int i=1; i<10; i+=2){
        even_sum+=arr[i];
    }
    odd_sum>even_sum ? printf("%d",odd_sum-even_sum) : printf("%d",even_sum-odd_sum);
    return 0;
}