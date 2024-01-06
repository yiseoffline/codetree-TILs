#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int i=0;
    while(i<100){
        scanf("%d ",&arr[i]);
        if(arr[i]==999 || arr[i] == -999){
            break;
        }
        i++;
    }
    int max,min=arr[0];
    for(int j=1; j<i; j++){
        if(max<arr[j]){
            max=arr[j];
        }
        if(min>arr[j]){
            min=arr[j];
        }
    }
    printf("%d %d",max,min);
    return 0;
}