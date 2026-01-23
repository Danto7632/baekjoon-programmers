#include <iostream>

using namespace std;

int f[41];
int sum1=0,sum2=0;
int fib(int n);
int fibonacci(int n);

int main() {
    int n;
    cin >> n;
    fib(n);
    fibonacci(n);
    cout << sum1 << " " << sum2;
}

int fib(int n) {
    if (n==1||n==2){
        sum1++;
        return 1;
    }
    else {
        return fib(n-1)+fib(n-2);
    }
}


int fibonacci(int n) {
    f[1] = 1;
    f[2] = 1;
    for (int i=3;i<n+1;i++){
        sum2++;
        f[i] = f[i-1]+f[i-2];
    }
    return f[n];
}