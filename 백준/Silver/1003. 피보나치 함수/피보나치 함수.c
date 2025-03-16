#include <stdio.h>

int main() {
    int t,n;
    int fibo[41];
    fibo[0]=0;
    fibo[1]=1;
    for (int i=2;i<=40;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    scanf("%d", &t);
    for (int i=0;i<t;i++){
        scanf("%d", &n);
        printf("%d %d\n", fibo[n-1<0?1:n-1], fibo[n]);
    }
}