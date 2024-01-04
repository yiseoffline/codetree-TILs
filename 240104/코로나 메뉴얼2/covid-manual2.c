#include <stdio.h>
//증상도 있고 37℃ 이상일 때 A
//증상은 없지만 37℃ 이상일 때 B
//증상은 있지만 체온은 정상일 때 C
//둘 다 괜찮은 경우엔 D
//A로 가는 사람이 2명 이상 나올때는 위급상황 E
int main() {
    // 여기에 코드를 작성해주세요.
    char symptom[3];
    int temp[3];
    int hospital[4]={0};
    for(int i=0; i<3; i++){
        scanf("%c %d\n",&symptom[i], &temp[i]);

        if(symptom[i]=='Y' && temp[i]>=37){
            hospital[0]++;
        }
        else if(symptom[i]=='N' && temp[i]>=37){
            hospital[1]++;
        }
        else if(symptom[i]=='Y'&&temp[i]<37){
            hospital[2]++;
        }
        else{
            hospital[3]++;
        }
    }
    for(int i=0; i<4; i++){
        printf("%d ",hospital[i]);
    }
    if(hospital[0]>=2){
        printf("E");
    }
    return 0;
}