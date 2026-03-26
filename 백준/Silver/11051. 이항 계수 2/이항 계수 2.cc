#include <iostream>

using namespace std;

int main() {
    int dp[1001][1001]={0,};
    int N,K;
    cin >> N >> K;
    for (int i=0;i<N+1;i++){
        for (int j=0;j<K+1;j++){
            if (i==j||j==0){
                dp[i][j]=1;
            }
            else {
                dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%10007;
            }
        }
    }
    cout << dp[N][K];
}