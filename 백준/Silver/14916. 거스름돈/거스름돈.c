#include <stdio.h>

int main() {
    int n,dp[100000]={0,};
    scanf("%d", &n);
    dp[2]=1;
    dp[4]=2;
    dp[5]=1;
    for (int i=6;i<=n;i++){
        if (i%5==0){
            dp[i] = dp[i-5] + 1;
        }
        else if (i%2==0){
            dp[i] = dp[i-2] + 1;
        }
        else {
            dp[i] = dp[i-5]>dp[i-2]?dp[i-2]:dp[i-5] + 1;
        }
    }
    printf("%d", dp[n]==0?-1:dp[n]);
}