#include <iostream>

using namespace std;

int main() {
    int a,b,c,sum;
    cin >> a >> b >> c;
    sum=a*3+b*2+c;
    cin >> a >> b >> c;
    cout << (sum==a*3+b*2+c?'T':sum>a*3+b*2+c?'A':'B');
}