#include <iostream>

using namespace std;

int main() {
    double a,b;
    cin >> a >> b;
    cout << (a-a*0.01*b<100?1:0);
}