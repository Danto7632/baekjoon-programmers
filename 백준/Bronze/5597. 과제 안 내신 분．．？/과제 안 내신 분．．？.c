#include <stdio.h>

int main(void) {
    int n, array[30]={0};
    for (int i=0;i<28;i++) {
        scanf("%d", &n);
        array[n-1] = n;
    }
    
    for (int i=0;i<30;i++) {
        if (array[i] == 0)
            printf("%d\n", i+1);
    }
}