#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char &s){
    for(int i=0; i<strlen(s)/2; i++){
        if(s[i]==s[strlen(s)-i-1]){
            return#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *s) {
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++) {
        if (s[i] != s[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
 true;
        } else{
            return false;
        }
    }
}


int main() {
    char str[100];
    scanf("%s",str);
    if(isPalindrome(str)==true){
        printf("Yes");
    } else{
        printf("No");
    }
    return 0;
}