#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << (a==b?a*2:a>b?b*2+1:a*2+1);
}