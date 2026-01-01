#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << a*b/24200+(a*b%24200!=0?1:0);
}