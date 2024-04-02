#include <stdio.h>

int main(void) {
    int times=1, num, count, i, n;
    char N[10] = {0};
    for (i=0;i<3;i++) {
        scanf("%d", &num);
        times*=num;
    }
    n=0;
    while (times != 0) {
        N[n] = times%10;
        times/=10;
        n++;
    }

    
    for (i=0;i<10;i++) {
        count=0;
        for (int j=0;j<n;j++) {
             if (N[j] == i) {
                 count++;
             }   
        }
        printf("%d\n", count);
    }
}
    