#include <stdio.h>

int memo[301];
int arr[301];

int max(int n)
{
    int n1, n2;
    for (int i=3;i<=n;i++){
        memo[i] = (memo[i-3] + arr[i-1] + arr[i])>(memo[i-2]+arr[i])?(memo[i-3] + arr[i-1] + arr[i]):(memo[i-2]+arr[i]);
    }
    return memo[n];
}

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i=1;i<=n;i++){
        scanf("%d", &arr[i]);
    }
    
    memo[1] = arr[1];
    memo[2] = arr[1] + arr[2];
    
    printf("%d", max(n));
}