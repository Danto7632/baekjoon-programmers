#include <iostream>

using namespace std;

int main() {
    int n,h,v;
    cin >> n >> h >> v;
    cout << (h>n-h?h:n-h)*(v>n-v?v:n-v)*4;
}