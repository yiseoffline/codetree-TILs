#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[20];
    char str2[20];
    char str3[20];
    int arr[3];

    scanf("%s\n%s\n%s",str1,str2,str3);
    arr[0]=strlen(str1);
    arr[1]=strlen(str2);
    arr[2]=strlen(str3);

    int max=arr[0];
    int min=arr[0];

    for(int i=1; i<3; i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",max-min);

    return 0;
}