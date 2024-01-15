#include <stdio.h>
#include <string.h>

int main() {
    char arr[10];
    scanf("%s",arr);
    for(int i=0; i<strlen(arr); i++){
        printf("%c\n",arr[i]);
    }
    return 0;
}