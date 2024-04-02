#include <stdio.h>

int main(void) {
    int T, H, W, N, count;
    scanf("%d", &T);
    for (int i=0;i<T;i++) {
        count = 1;
        scanf("%d %d %d", &H, &W, &N);

        while (N>H) {
            N-=H;
            count++;
        }
        printf("%d\n", N*100+count);
    }
}