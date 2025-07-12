#include <iostream>

using namespace std;

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    
    cout << (n>a/2+b?a/2+b:n);
}