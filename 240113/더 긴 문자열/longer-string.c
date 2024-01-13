#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[20],str2[20];
    scanf("%s %s",str1,str2);
    if(strlen(str1)>strlen(str2)){
        printf("%s %d",str1,strlen(str1));
    } else{
        printf("%s %d",str2, strlen(str2));
    }
    return 0;
}