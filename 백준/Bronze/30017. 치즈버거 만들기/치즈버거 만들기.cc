#include <iostream>

using namespace std;

int main() {
    int p,c;
    cin >> p >> c;

    cout << (p>c?c+c+1:p+p-1);
}