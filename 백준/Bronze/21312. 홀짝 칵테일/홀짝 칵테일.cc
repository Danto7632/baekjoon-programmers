#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a%2+b%2+c%2==0){
        cout << a*b*c;
    }
    else {
        cout << (a%2==0?1:a%2*a)*(b%2==0?1:b%2*b)*(c%2==0?1:c%2*c);
    }
}