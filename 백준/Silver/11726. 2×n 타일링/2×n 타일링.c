#include <stdio.h>

int memo[1001];

int tile(int n)
{
    for (int i=3;i<=n;i++){
        if (memo[i]==0){
            memo[i] = memo[i-1] + memo[i-2];
            memo[i]%=10007;
        }
    }
    return memo[n];
}

int main() {
    int n;
    memo[1] = 1;
    memo[2] = 2;
    scanf("%d", &n);
    printf("%d", tile(n));
}