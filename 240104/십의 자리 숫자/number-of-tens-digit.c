#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i=0; 
    int arr[100];
    int divide[100];
    while(i<100){
        scanf("%d ",&arr[i]);
        if(arr[i]==0){
            break;
        }
        divide[i]=arr[i]/10;
        i++;
    }
    int count_arr[10]={0};
    for(int j=0; j<i; j++){
        count_arr[divide[j]]++;
    }
    for(int i=1; i<10; i++){
        printf("%d - %d\n",i,count_arr[i]);
    }
    return 0;
}