#include <iostream>

using namespace std;

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    cout << (n==k?m*k:m*k+m);
}