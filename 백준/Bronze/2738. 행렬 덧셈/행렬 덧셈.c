#include <stdio.h>

int main(void) {
    int n, N, M, a[100][100]={0};
    scanf("%d %d", &N, &M);
    
    for (int i=0;i<N;i++) {
        for (int j=0;j<M;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i=0;i<N;i++) {
        for (int j=0;j<M;j++) {
            scanf("%d", &n);
            a[i][j] += n;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}