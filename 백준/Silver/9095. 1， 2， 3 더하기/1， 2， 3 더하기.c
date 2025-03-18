#include <stdio.h>

int memo[11];

int plus(int n)
{
    for (int i=4;i<=n;i++){
        if (memo[i]==0){
            memo[i] = memo[i-1] + memo[i-2] + memo[i-3];
        }
    }
    return memo[n];
}

int main() {
    int t,n;
    memo[1] = 1;
    memo[2] = 2;
    memo[3] = 4;
    scanf("%d", &t);
    for (int i=0;i<t;i++){
        scanf("%d", &n);
        printf("%d\n", plus(n));
    }
}