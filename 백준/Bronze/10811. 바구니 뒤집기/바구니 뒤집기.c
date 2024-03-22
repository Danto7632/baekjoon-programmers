#include <stdio.h>

int main(void) {
    int N, M, i, j, k, array[100]={0};
    
    scanf("%d %d", &N, &M);
    
    for (int n=0;n<N;n++) {
        array[n] = n+1;
    }
    
    for (int n=0;n<M;n++) {
        scanf("%d %d", &i, &j);
        while (i<j) {
            k = array[j-1];
            array[j-1] = array[i-1];
            array[i-1] = k;
            i++;
            j--;
        }
    }
    
    for (int n=0;n<N;n++) {
        printf("%d ", array[n]);
    }
}