#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int m1,d1,m2,d2;
    scanf("%d %d %d %d",&m1,&d1,&m2,&d2);
    int days[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int day1 =0;
    for(int i=1; i<m1; i++){
        day1+=days[i];
    }
    day1+=d1;

    int day2=0;
    for(int i=1; i<m2; i++){
        day2 += days[i];
    }
    day2+=d2;

    printf("%d",day2-day1+1);

    return 0;
}