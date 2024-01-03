#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[10];
    arr[0]=a;
    arr[1]=b;
    printf("%d %d ",a,b);
    for(int i=2; i<10; i++){
        arr[i]=arr[i-1]+arr[i-2];
        if(arr[i]>=100){
            arr[i]%=100;
            arr[i]%=10;
        } else if(arr[i]>=10 && arr[i]<100){
            arr[i]%=10;
        }
        printf("%d ",arr[i]);
    }

    return 0;
}