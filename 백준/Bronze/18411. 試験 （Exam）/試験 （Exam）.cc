#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    cout << (a+b>a+c?a+b>b+c?a+b:b+c:a+c>b+c?a+c:b+c);
}