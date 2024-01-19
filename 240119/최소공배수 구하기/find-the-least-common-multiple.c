#include <stdio.h>

int lcm(int n, int m){
    int lcm=0;
    for(int i=n*m; i>=1; i--){ //두 정수의 가장 큰 공배수 만큼 i를 증가 		
        if(i%n==0 && i%m==0) 
            lcm=i;	//두 정수의 공배수를 lcm에 입력 	
    }
    return lcm;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",lcm(n,m));
    return 0;
}