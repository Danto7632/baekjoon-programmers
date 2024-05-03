#include <stdio.h>

int main(void){
    int N, M, card[100], near=300000, num;
    scanf("%d %d", &N, &M);
    for (int i=0;i<N;i++){
        scanf("%d", &card[i]);
    }
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            for (int k=j+1;k<N;k++){
                if (M-card[i]-card[j]-card[k]>=0){
                    if (M-card[i]-card[j]-card[k]<near){
                        near = M-card[i]-card[j]-card[k];
                        num = card[i]+card[j]+card[k];
                    }
                }
            }
        }
    }
    printf("%d", num);
}