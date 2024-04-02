#include <stdio.h>

int main(void) {
    int N=0, M=0, MAX=0, a[9][9]={0};
    
    for (int i=0;i<9;i++) {
        for (int j=0;j<9;j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j]>MAX){
                MAX = a[i][j];
                N = i;
                M = j;
            }
        }
    }
    printf("%d\n%d %d", MAX, N+1, M+1);
}