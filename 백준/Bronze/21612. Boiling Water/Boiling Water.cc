#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n*5-400 << "\n" << (n==100?0:n>100?-1:1);
}