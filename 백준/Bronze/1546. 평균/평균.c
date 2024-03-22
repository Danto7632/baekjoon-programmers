#include <stdio.h>

int main(void) {
    int N, M = 0, score, sum = 0;
    scanf("%d", &N);
    for (int i=0;i<N;i++) {
        scanf("%d ", &score);
        if (score>M)
            M = score;
        sum+=score;
    }
    
    printf("%f", (double)sum/N/M*100);
}