#include <stdio.h>

int main(){
    int N, K, a=0;
    int NUM[10000];
    scanf("%d %d", &N, &K);

    for (int i=1;i<N+1;i++){
        if (N%i==0) {
            NUM[a]=i;
            a++;
        }
    }
    printf("%d", NUM[K-1]);
}