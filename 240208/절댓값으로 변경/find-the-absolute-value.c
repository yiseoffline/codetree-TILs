#include <stdio.h>
#include <stdlib.h>

void absolute(int *arr, int n){
    for(int i=0; i<n; i++){
        arr[i]=abs(arr[i]);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
        absolute(&arr[i], n);
        printf("%d ",arr[i]);
    }
    return 0;
}