#include <stdio.h>
#define NUM 100

int main(void) {
    
    int N, M, a, b, i, save;
    int array[NUM] = {0};
    
    scanf("%d %d", &N, &M);
    
    for (i=0;i<N;i++) {
        array[i] = i+1;
    }
    
    for (i=0;i<M;i++) {
        scanf("%d %d", &a, &b);
        save = array[a-1];
        array[a-1] = array[b-1];
        array[b-1] = save;
    }
    
    for (i=0;i<N;i++) {
        printf("%d ", array[i]);
    }

}