#include <stdio.h>
// 1 a : a번째 원소 출력
// 2 a : a가 있는지 없는지/ 있다면 몇번째 원소인지, 2개 이상 있다면 작은 인덱스
//       없으면 0
// 3 a b : a ~ b번째 원소까지 순서대로 공백있게 출력

int main() {
    // 여기에 코드를 작성해주세요.
    int n,q;
    scanf("%d %d\n",&n,&q);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    int i=0; 
    int q_num;
    int input,a,b;
    while(i<q){
        scanf("%d ",&q_num);
        if(q_num==1){
            scanf("%d\n",&input);
            printf("%d\n",arr[input-1]);
        }
        else if(q_num==2){
            scanf("%d\n",&input);
            for(int k=0; k<n; k++){
                if(arr[k]==input){
                    printf("%d\n",k+1);
                }
            }
        }
        else if(q_num==3){
            scanf("%d %d\n",&a,&b);
            for(int k=a-1; k<b; k++){
                printf("%d ",arr[k]);
            }
        }
        i++;
    }
    return 0;
}