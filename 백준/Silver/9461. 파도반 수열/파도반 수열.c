#include <stdio.h>

long long int memo[101];

long long int wave(int n)
{
    for (int i=6;i<=n;i++){
        if (memo[i]==0){
            memo[i] = memo[i-5] + memo[i-1];
        }
    }
    return memo[n];
}

int main() {
    int t,n;
    memo[1] = 1;
    memo[2] = 1;
    memo[3] = 1;
    memo[4] = 2;
    memo[5] = 2;
    scanf("%d", &t);

    for (int i=0;i<t;i++){
        scanf("%d", &n);
        printf("%lld\n", wave(n));
    }
}