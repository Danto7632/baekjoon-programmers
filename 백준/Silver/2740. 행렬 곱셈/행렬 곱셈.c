#include <stdio.h>

int main() {
    int N,M,K,sum,arrA[100][100],arrB[100][100];
    scanf("%d %d", &N, &M);
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            scanf("%d", &arrA[i][j]);
        }
    }
    scanf("%d %d", &M, &K);
    for (int i=0;i<M;i++){
        for (int j=0;j<K;j++){
            scanf("%d", &arrB[i][j]);
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<K;j++){
            sum=0;
            for (int k=0;k<M;k++){
                sum+=arrA[i][k]*arrB[k][j];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
}