#include <stdio.h>
#include <stdbool.h>

bool existDay(int m, int d){
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        if(d>=1 && d<=31){
            return true;
        }
        else{
            return false;
        }
    }
    else if(m==4 || m==6 || m==9 || m==11){
        if(d>=1 && d<=30){
            return true;
        }
        else{
            return false;
        }
    }
    else if(m==2){
        if(d>=1 && d<=28){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

int main() {
    int m,d;
    scanf("%d %d",&m, &d);
    if(existDay(m,d)==true){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}