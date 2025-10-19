#include <iostream>

using namespace std;

int memo[3]={1,1,0};

int jg(int n) {
    if (n==1){
        return 1;
    }
    for (int i=1;i<n;i++){
        memo[2]=(memo[0]+memo[1])%15746;
        memo[0]=memo[1];
        memo[1]=memo[2];
    }
    
    return memo[2];
}

int main() {
    int n;
    cin >> n;
    cout << jg(n);
}