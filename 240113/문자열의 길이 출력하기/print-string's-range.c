#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[100],str2[100];
    scanf("%s\n%s",str1,str2);
    printf("%d",strlen(str1)+strlen(str2));
    return 0;
}