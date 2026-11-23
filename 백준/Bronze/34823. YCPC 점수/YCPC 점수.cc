#include <iostream>

using namespace std;

int main() {
    int y,c,p;
    cin >> y >> c >> p;
    cout << (y<c/2?y<p?y:p:c/2<p?c/2:p);
}