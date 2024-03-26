#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    
    for (int i=1;i<2*N;i++) {
        if (i<N+1){
            for (int j=0;j<N-i;j++){
                printf(" ");
            }
            for (int j=0;j<2*i-1;j++){
                printf("*");
            }
            printf("\n");
        }
        else {
            for (int j=0;j<i-N;j++){
                printf(" ");
            }
            for (int j=0;j<4*N-2*i-1;j++){
                printf("*");
            }
            printf("\n");
        }
    }
}