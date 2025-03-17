#include <stdio.h>

int memo[1000001];

int cal(int n) {
    int n1, n2;
    if (memo[n]!=0){
        return memo[n];
    }
    else if (n<=1){
        memo[n]=0;
    }
    else {
        n1 = cal(n/2) + n%2 + 1; // n%2는 2로 나누어떨어지지 않을때 -1 해야되는 횟수
        n2 = cal(n/3) + n%3 + 1; // n%3는 3으로 나누어떨어지지 않을때 -1 해야되는 횟수
        memo[n] = n1<n2?n1:n2;
    }
    return memo[n];
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", cal(n));
}