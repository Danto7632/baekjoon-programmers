#include <stdio.h>

int main() {
    int count,r,n;
    double pac[31];
    pac[0]=1;
    for (int i=1;i<31;i++){
        pac[i] = pac[i-1]*i;
    }
    scanf("%d", &count);
    for (int i=0;i<count;i++){
        scanf("%d %d", &r, &n);
        printf("%.f\n", pac[n]/(pac[r]*pac[n-r]));
    }
}