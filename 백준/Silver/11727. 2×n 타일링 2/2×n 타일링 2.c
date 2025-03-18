#include <stdio.h>
#include <math.h>

int memo[1001];

int tile2(int n)
{
    for (int i=3;i<=n;i++){
        if (i%2==0){
            memo[i] = memo[i-1]*2+1;
            memo[i]%=10007;
        }
        else {
            memo[i] = memo[i-1]*2-1;
            memo[i]%=10007;
        }
    }
    return memo[n];
}

int main() {
    int n;
    memo[1] = 1;
    memo[2] = 3;
    scanf("%d", &n);
    printf("%d", tile2(n));
}