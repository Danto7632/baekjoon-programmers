#include <iostream>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    cout << (n<=60+k?n*1500:(60+k)*1500+(n-60-k)*3000);
}