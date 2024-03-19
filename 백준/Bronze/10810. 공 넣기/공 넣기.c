#include <stdio.h>
#define NUM 100

int main(void) {
    
    int N, M, a, b, c, i;
    int array[NUM] = {0};
    
    scanf("%d %d", &N, &M);
    for (i=0;i<M;i++) {
        scanf("%d %d %d", &a, &b, &c);
        while (a<=b) {
            array[a-1] = c;
            a++;
        }
    }
    
    for (i=0;i<N;i++) {
        printf("%d ", array[i]);
    }

}