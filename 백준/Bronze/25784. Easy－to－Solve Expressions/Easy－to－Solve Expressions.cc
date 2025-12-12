#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    cout << (a+b==c||b+c==a||a+c==b?1:a*b==c||b*c==a||a*c==b?2:3);
}