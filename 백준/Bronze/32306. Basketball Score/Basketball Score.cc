#include <iostream>

using namespace std;

int main() {
    int a,b,c,sum;
    cin >> a >> b >> c;
    sum=a+b*2+c*3;
    cin >> a >> b >> c;
    cout << (sum==a+b*2+c*3?0:sum>a+b*2+c*3?1:2);
}