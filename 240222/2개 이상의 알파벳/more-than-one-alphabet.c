#include <stdio.h>
#include <string.h>

void calculateStr(char *str){
    int alphabet[26];
    for(int i=0; i<strlen(str); i++){
        int ascii = str[i]-'a';
        alphabet[ascii]++;
    }
    int count=0;
    for(int i=0; i<26; i++){
        if(alphabet[i]==1){
            count++;
        }
    }
    if(count>=2){
        printf("Yes");
    } else{
        printf("No");
    }
}

int main() {
    char str[100];
    scanf("%s",str);
    calculateStr(str);
    return 0;
}