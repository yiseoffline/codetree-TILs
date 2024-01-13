#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int elem=1;
    int j=n-1;
    
    for(int k=0; k<n; k++){
        if(k%2==0){
            for(int i=n-1; i>=0; i--){
                arr[i][j]=elem;
                elem++;
            }
        } else{
            for(int i=0; i<n; i++){
                arr[i][j]=elem;
                elem++;
            }
        }
        j--;
    }
    
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }

    return 0;
}