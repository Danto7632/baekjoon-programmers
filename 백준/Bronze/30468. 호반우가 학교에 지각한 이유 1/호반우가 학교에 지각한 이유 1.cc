#include <iostream>

using namespace std;

int main() {
    int a,b,c,d,n;
    cin >> a >> b >> c >> d >> n;
    cout << (n*4-a-b-c-d>0?n*4-a-b-c-d:0);
}