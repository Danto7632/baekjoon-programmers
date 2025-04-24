#include <stdio.h>

int main() {
    int N,M;
    char arr[10][11];
    scanf("%d %d", &N, &M);
    for (int i=0;i<N;i++){
        scanf("%s", arr[i]);
    }
    for (int i=0;i<N;i++){
        for (int j=M-1;j>=0;j--){
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
}